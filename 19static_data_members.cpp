#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    public:
    void setData(void)
    {
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count++;
    }
    void getData(void)
    {
        cout<<"The id of the employee is "<<id<<" and the employee number is "<<count<<endl;
    }

    static void getCount(void)
    {
        cout<<"The value of cout is "<<count<<endl;
    }
};

int Employee:: count;

int main()
{
    Employee txusif, jw, jc;
    txusif.setData();
    txusif.getData();
    Employee :: getCount();

    jw.setData();
    jw.getData();
    Employee :: getCount();
    
    jc.setData();
    jc.getData();
    Employee :: getCount();
    
    return 0;
}