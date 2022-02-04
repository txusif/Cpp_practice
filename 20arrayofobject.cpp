#include<iostream>
using namespace std;

class Ar
{
    int listn;
    int fllw;
    public:
    void setListn(void)
    {
        fllw = 22133123;
        cout<<"Enter the number of listners"<<endl;
        cin>>listn;
    }
    void getListn(void)
    {
        cout<<"The listners of Ar is "<<listn<<endl;
    }
};
int main()
{
    Ar hh[4];
    for (int i = 0; i < 4; i++)
    {
        hh[i].setListn();
        hh[i].getListn();   
    }   
    return 0;
}