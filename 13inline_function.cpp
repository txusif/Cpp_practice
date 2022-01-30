// Inline function, Default argument and Constant argument

#include<iostream>
using namespace std;

inline int product(int a, int b) // Inline function
{
    return a*b;
}

float moneyReceived(int current, float factor = 1.05) // Default value
{
    return current*factor;
}

// int strlen(const int *p)
// {

// }

int main()
{
    int a, b;
    // cout<<"Enter the values of a and b: "<<endl;
    // cin>>a>>b;
    // cout<<"The product a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" rs in your bank account you'll receive "<<moneyReceived(money)<<" rs after 1 year"<<endl;

    cout<<"If you have "<<money<<" rs in your bank account you'll receive "<<moneyReceived(money,2.0)<<" rs after 1 year"<<endl;

    return 0;
}