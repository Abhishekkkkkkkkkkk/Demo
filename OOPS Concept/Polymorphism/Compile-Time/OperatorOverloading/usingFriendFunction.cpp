#include<bits/stdc++.h>
using namespace std;

// Operator Overloading using Friend Function 
class Point{
    int x, y;

    public:
        Point(int a = 0, int b = 0) : x(a), y(b) {}; // Constructor

        // Friend Function to overload + 
        friend Point operator + (const Point &p1, const Point &p2);

        void display(){
            cout << "(" << x << ", " << y << ")" << endl;
        }

};

Point operator + (const Point &p1, const Point &p2){
    return Point(p1.x + p2.x , p1.y + p2.y);
} 

int main(){
    Point p1(1, 2), p2(3, 4);

    Point ans = p1 + p2;
    ans.display();

    return 0;
}