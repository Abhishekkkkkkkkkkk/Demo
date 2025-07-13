#include<bits/stdc++.h>
using namespace std;

class Male{ // Base Class
    public:
        void dance(){
            cout << "Dancing..." << endl;
        }
};

class Female{ // Another Base Class
    public:
        void run(){
            cout << "Running..." << endl;
        }
};

class Human : public Male, public Female{

};

int main(){
    Human obj;
    obj.dance();
    obj.run();
    return 0;
}