#include <iostream>
using namespace std;

int main()
{
    // For loop
    // for(int i = 0; i <= 10; i++)
    // {
    //     cout<<i<<endl;
    // }

    // While loop
    // int i = 0;
    // while (i <= 10)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Do While loop
    // int i = 1;
    // do
    // {
    //     cout<<i<<endl;
    //     i++;
    // } while (false);

    int a = 6, i = 1;
    do
    {
        cout<<a<<" * "<<i<<" =  "<<a*i<<endl;
        i++;
    } while (i <= 10);

    return 0;
}