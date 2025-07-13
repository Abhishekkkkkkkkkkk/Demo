#include<bits/stdc++.h>
using namespace std;

// Operator Overloading using Member Function 
class Point{
    int x, y;

    public:
        Point(int a = 0, int b = 0) : x(a), y(b) {}; // Constructor

        // Member Function to overload + 
        Point operator + (const Point &p){
            return Point(x + p.x , y + p.y);
        }

        void display(){
            cout << "(" << x << ", " << y << ")" << endl;
        }
};

int main(){
    Point p1(1, 2), p2(3, 4);

    Point ans = p1 + p2;
    ans.display();

    return 0;
}