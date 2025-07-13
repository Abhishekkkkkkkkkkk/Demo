#include<bits/stdc++.h>
using namespace std;

class Example{
    public:
        void show(){
            cout << "No Argument" << endl;
        }

        void show(int x){
            cout << "Integer as Argument: " << x << endl;
        }

        void show(double x){
            cout << "Double as Argument: " << x << endl;
        }
};

int main(){
    Example obj;
    obj.show();
    obj.show(10);
    obj.show(5.7);

    return 0;
}