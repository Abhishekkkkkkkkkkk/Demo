#include <bits/stdc++.h> 
using namespace std;

// Node Structure
struct TreeNode{
    int data; 
    TreeNode* left; 
    TreeNode* right;

    TreeNode() : data(0), left(nullptr), right(nullptr) {} // Default Constructor

    TreeNode(int x) : data(x), left(nullptr), right(nullptr) {} // Parameterized Constructor
    
    // // Constructor with data, left child, and right child
    TreeNode(int x, TreeNode* left, TreeNode* right) : data(x), left(left), right(right) {}
};


class BFS{
public:
    // Function to perform level-order traversal of a binary tree
    vector<vector<int>> levelOrder(TreeNode* root){
        // Initialize the answer vector to store the final result
        vector<vector<int>> ans; 
        if(root == nullptr){ // If the root is null, return an empty result
            return ans; 
        }
        
        // Queue to store node for level-order traversall
        queue<TreeNode*> q; 
        q.push(root); // Initially push the root of the tree into the queue

        while(!q.empty()){
            int size = q.size(); // Size of the current level

            vector<int> level; // Vector to store nodes at the current level 
            
            // Traverse all nodes at the current level
            for(int i = 0; i < size; i++){
                TreeNode* node = q.front(); // Get the front node from the queue
                q.pop(); // Remove it from the queue

                // Add left child and right child to the queue if it exists
                if(node -> left != nullptr){
                    q.push(node -> left);
                }
                if(node -> right != nullptr){
                    q.push(node -> right);
                }
                level.push_back(node -> data);  // Store the current node's value in the level vector
            }
            ans.push_back(level); // After processing the current level, add the level vector to the final result
        }
        return ans; 
    }
};

// Function to print the elements of a vector
void printVector(const vector<int>& vec){
    // Iterate through vector to print each element
    for(int num : vec){
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    // Binary Tree Creation
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);

    BFS obj; 

    vector<vector<int>> result = obj.levelOrder(root); // Perform LOT

    cout << "Level Order Traversal is: "<< endl;

    // Printing Answer
    for(const vector<int>& level : result){
        printVector(level);
    }

    return 0;
}