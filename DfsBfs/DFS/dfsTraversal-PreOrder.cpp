#include <bits/stdc++.h>
using namespace std;

// Node Structure
struct Node{
    int data;
    Node* left;
    Node* right;
    
    Node(int val) : data(val), left(nullptr), right(nullptr) {} // Parametrized Constructor
};

// Function to perform preorder traversal
void preorder(Node* root, vector<int> &arr){
    // Base Case - If the current node is NULL
    if(root == nullptr){
        return;
    }

    // Process the root node
    arr.push_back(root->data);

    // Recurse on the left subtree
    preorder(root->left, arr);

    // Recurse on the right subtree
    preorder(root->right, arr);
}

// Function to initiate preorder traversal
vector<int> preOrder(Node* root){
    vector<int> ans;
    preorder(root, ans);
    return ans;
}

// Main function
int main(){
    // Binary Tree Creation
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);

    vector<int> result = preOrder(root);

    cout << "Preorder Traversal: ";
    
    for(int val : result){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}