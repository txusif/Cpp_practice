#include <iostream>
#include <math.h>
using namespace std;

class simpleCalc
{
protected:
    float a, b;

public:
    void setData(float x, float y)
    {
        a = x;
        b = y;
    }
    void operations()
    {
        cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }
};

class ScientificCalc
{
    protected:
        float x;
    public:
        void setSciData(float a)
        {
            x = a;
        }
        void sciOperations()
        {
            cout<<"The sine value of sin("<<x<<")"<<" is "<<sin(x)<<endl;
            cout<<"The cosine value of cosin("<<x<<")"<<" is "<<cos(x)<<endl;
            cout<<"The tan value of tan("<<x<<")"<<" is "<<tan(x)<<endl;
        }
    
};

class hybridCalc : public simpleCalc, public ScientificCalc
{
};

int main()
{
    hybridCalc test;
    test.setData(10, 2);
    test.operations();
    cout<<" "<<endl;
    test.setSciData(1);
    test.sciOperations();

    return 0;
}