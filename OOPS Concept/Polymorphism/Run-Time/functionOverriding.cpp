#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        void show(){
            cout << "Base Class Function" << endl;
        }
};

class Derived : public Base{
    public:
        void show(){
            cout << "Derived Class Function" << endl;
        }
};

int main(){
    Derived obj;
    obj.show();

    return 0;
}