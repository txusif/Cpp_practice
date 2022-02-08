#include<iostream>
using namespace std;

class sim
{
    int data1;
    int data2;
    int data3;

    public:

    sim (int a = 3, int b = 3, int c = 3)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData()
    {
        cout<<"The values are "<<data1<<", "<<data2<<" & "<<data3<<endl;
    }

};

int main()
{
    sim s(1);
    s.printData();

    sim s1;
    s1.printData();
    return 0;
}