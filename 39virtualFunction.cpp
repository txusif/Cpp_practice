#include<iostream>
using namespace std;

class BaseClass
{
    public:
    int varBase = 1;
    virtual void display()
    {
        cout<<"1 BaseClass variable "<<varBase<<endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int varDerived = 1;
    void display()
    {
        cout<<"2 BaseClass variable "<<varBase<<endl;
        cout<<"2 DerivedClass variable "<<varDerived<<endl;
    }
};

int main()
{
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    
    return 0;
}