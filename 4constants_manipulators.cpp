#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Constants
    int a = 10;
    cout<<"The value of a was: "<<a<<endl;

    a = 20;
    cout<<"The value of a is: "<<a<<endl;

    const int b = 11;
    // The value of b is now constant, it cannot be changed
    cout<<"The value of b was: "<<b<<endl;

    // b = 12;
    // cout<<"The value of b was: "<<b<<endl;

    // Maipulators
    int x = 4, y = 67, z = 3333;
    cout<<"The value of x without setw is: "<<x<<endl;
    cout<<"The value of x without setw is: "<<y<<endl;
    cout<<"The value of x without setw is: "<<z<<endl;

    cout<<"The value of x with setw is: "<<setw(4)<<x<<endl;
    cout<<"The value of x with setw is: "<<setw(4)<<y<<endl;
    cout<<"The value of x with setw is: "<<setw(4)<<z<<endl;

    // Operator precedence
    int m = 5, n = 3;
    // int o = m*10+n;
    int o = ((((m*10)+n)-10)+5);
    cout<<o<<endl;;

    return 0;
}