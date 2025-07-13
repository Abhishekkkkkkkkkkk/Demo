#include<bits/stdc++.h>
using namespace std;

class Human{ // Parent Class
    public:
        void speak(){
            cout << "Speaking..." << endl;
        }
};

class Male : public Human{ // Child Class
    public:
        void dance(){
            cout << "Dancing..." << endl;
        }
};

class Female : public Male{ // Child Class
    public:
        void run(){
            cout << "Running..." << endl;
        }
};

int main(){
    Female obj;
    obj.speak(); // Method of Human class
    obj.dance(); // Method of Male class
    obj.run();
    return 0;
}