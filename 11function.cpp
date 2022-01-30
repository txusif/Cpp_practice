#include<iostream>
using namespace std;

// Function prototype
// Type Function-name (arguments);
// int a and int b are Formal parameters
int sum(int a, int b);  

int main()
{
    int num1, num2;

    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter first number: "<<endl;
    cin>>num2;

    // num1 and num2 are Actual parameters
    cout<<"The sum of given numbers is "<<sum(num1, num2)<<endl;

    return 0;
}

int sum(int a, int b)
{
    int c = a+b;
    return c;
}