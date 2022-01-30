#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

// Call by pointer reference
// void swap(int* a, int* b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// Call by reference variable
void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 50, b = 40;
    cout<<"The sum of 50 and 40 is "<<sum(a, b)<<endl;
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    // swap(&a,&b);
    swapReference(a,b);
    cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
    return 0;
}