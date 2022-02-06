#include<iostream>
using namespace std;

class complex 
{
    int a;
    int b;

    public:
    complex(int , int);

    void printNumber()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    complex c1(5, 10);
    c1.printNumber();
    
    complex c2 = complex(2, 4);
    c2.printNumber();
    
    return 0;
}