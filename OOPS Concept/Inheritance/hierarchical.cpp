#include<bits/stdc++.h>
using namespace std;

class Base{ // Base Class
    public:
        void baseFunc(){
            cout << "Inside Base Function" << endl;
        }
};

class Child : public Base{
    public:
        void childFunc1(){
            cout << "Inside Child Function - 1" << endl;
        }
};

class AnotherChild : public Base{
    public:
        void childFunc2(){
            cout << "Inside Child Function - 2" << endl;
        }
};

int main(){
    Child obj1;
    obj1.baseFunc();
    obj1.childFunc1();

    AnotherChild obj2;
    obj2.baseFunc();
    obj2.childFunc2();

    return 0;
}