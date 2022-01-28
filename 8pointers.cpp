#include<iostream>
using namespace std;

int main()
{
    int a = 999;
    int* b = &a;
    // & -----> Address of operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;

    // * -----> Dereferance operator
    cout<<"The value at address of b is "<<*b<<endl;

    return 0;
}   