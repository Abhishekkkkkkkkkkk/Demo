#include<bits/stdc++.h>
using namespace std;

class Encapsulation{
    private:
        string name;
        int age;
    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }

        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
};

int main(){
    Encapsulation e;

    e.setName("Abhishek");
    e.setAge(22);

    cout << "Name: " << e.getName() << endl;
    cout << "Age: " << e.getAge() << endl;
    return 0;
}