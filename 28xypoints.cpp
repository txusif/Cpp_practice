#include<iostream>
using namespace std;

class point
{
    int x, y;
    public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout<<"The points is ("<<x<<", "<<y<<")"<<endl;
    }
};

int main()
{
    point p1(2,4);
    p1.displayPoint();
    point p2(3, 3);
    p2.displayPoint();
    
    return 0;
}