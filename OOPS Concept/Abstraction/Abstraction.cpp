#include<bits/stdc++.h>
using namespace std;

// Abstract Class 
class Shape{
    public:
        // Pure Virtual Function 
        virtual void area() = 0;

        // Virtual Function 
        virtual void display(){
            cout << "This is a Shape." << endl;
        }
};

class Circle : public Shape{
    int radius;

    public:
        Circle(int r) : radius(r) {};

        // Implementing Pure Virtual Function 
        void area() override{
            cout << "Area of Circle is: " << 3.14 * radius * radius << endl;
        }

        // Override Virtual Function 
        void display() override{
            cout << "This is a Circle with Radius: " << radius << endl;
        }
};

int main(){
    Shape* s = new Circle(5); // Base Class Pointer Pointing to Derived class Object

    s -> display();
    s -> area();

    delete s; // Deallocate the Dynamically Allocated Memory
    return 0;
}