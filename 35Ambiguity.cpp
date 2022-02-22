#include <iostream>
using namespace std;

class A
{
public:
    void greet()
    {
        cout << "Hi" << endl;
    }
};

class B
{
public:
    void greet()
    {
        cout << "Hello" << endl;
    }
};

class derived : public A, public B
{
public:
    void greet()
    {
        B::greet();
    }
};

int main()
{
    A a;
    a.greet();

    B b;
    b.greet();

    derived c;
    c.greet();

    return 0;
}