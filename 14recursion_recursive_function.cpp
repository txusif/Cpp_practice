#include <iostream>
using namespace std;

int fib(int n)
{   if (n<2)
    {
        return 1;
    }

    return fib(n-2) + fib(n-1);
}

int factorial(int n)
{
    if (n <= 1)
    {                                       // step by step
        return 1;                           // factorial(4) = 4 * factorial(3)
    }                                       // factorial(4) = 4 * 3 * factorial(2)
                                            // factorial(4) = 4 * 3 * 2 * factorial(1)
    return n * factorial(n - 1);            // factorial(4) = 4 * 3 * 2 *1
}                                           // factorial(4) = 24

int main()
{
    int a;
    cout << "Enter a number: " << endl;
    cin >> a;

    cout << "The factorial of " << a << " is " << factorial(a) << endl;
    cout << "The tern in Fibonacci series at position " << a << " is " << fib(a) << endl;

    return 0;
}