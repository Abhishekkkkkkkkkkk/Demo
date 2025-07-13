#include<bits/stdc++.h>
using namespace std;

// Operator Overloading using Global Non-Friend Function
class Point{
    public:
        int x, y;

        Point(int a = 0, int b = 0) : x(a), y(b) {}; // Constructor

        void display(){
            cout << "(" << x << ", " << y << ")" << endl;
        }
};
// Global Non-Friend Function
Point operator + (const Point &p1, const Point &p2){
    return Point(p1.x + p2.x , p1.y + p2.y);
}

int main(){
    Point p1(1, 2), p2(3, 4);

    Point ans = p1 + p2;
    ans.display();

    return 0;
}