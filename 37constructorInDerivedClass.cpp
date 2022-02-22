#include <iostream>
using namespace std;

class Base1
{
    int data1;
    public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 constructor called" << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;
    public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 constructor called" << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data1 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived constructor called" << endl;
    }
    void printDataDerived()
    {
        cout << "The value of Derived1 is " << derived1 << endl;
        cout << "The value of Derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived tx(2, 3, 8, 9);
    tx.printDataBase1();
    tx.printDataBase2();
    tx.printDataDerived();

    return 0;
}