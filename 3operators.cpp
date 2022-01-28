#include<iostream>
using namespace std;

int main()
{
    int a = 20, b = 10;
    // Arithmetic operators 
    cout<<"The value of a+b is "<<a+b<<endl;
    cout<<"The value of a-b is "<<a-b<<endl;
    cout<<"The value of a*b is "<<a*b<<endl;
    cout<<"The value of a/b is "<<a/b<<endl;
    cout<<"The value of a%b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;

    // Assignment operators
    int x = 501, y = 498;
    int sum = x+y;
    cout<<"The sum is "<<sum<<endl;

    // Comparison operators 
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;

    // Logical operators
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical or operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}
