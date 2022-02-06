#include<iostream>
using namespace std;

class complex;

class calculator
{
    public:

    int add(int a, int b)
    {
        return (a+b);
    }

    int sumRealcomplex(complex, complex);
    int sumCompcomplex(complex, complex);

};

class complex
{
    int a;
    int b;

    // friend int calculator :: sumRealcomplex(complex, complex);
    // friend int calculator :: sumCompcomplex(complex, complex);
    friend class calculator;

    public:

    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator :: sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator :: sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}


int main()
{
    complex c1, c2;
    c1.setNumber(2, 1);
    c2.setNumber(3, 2);
    calculator calc;
    int reslt = calc.sumRealcomplex(c1, c2);
    cout<<"The real part of c1 and c2 is "<<reslt<<endl;
    int resltc = calc.sumCompcomplex(c1, c2);
    cout<<"The real part of c1 and c2 is "<<resltc<<endl;
    return 0;
}