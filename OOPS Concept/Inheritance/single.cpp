#include<bits/stdc++.h>
using namespace std;

class Animal{ // Parent Class
    public:
        void speak(){
            cout << "Speaking..." << endl;
        }
};

class Dog : public Animal{ // Child Class

};

int main(){
    Dog d; // Object of child class
    d.speak(); // Method of parent class
    return 0;
}