#include<iostream>
using namespace std;

typedef struct employee
{
    int eId; //4
    char favChar; //1
    float salary; //4
} ep;

union money
{
    int rice; //4
    char car; //1
    float pounds; //4
};


int main()
{
    enum Meal{ breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==1);
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner; 

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car;

    // ep jw;
    // struct employee jc;
    // struct employee kdot;
    // jw.eId = 1;
    // jw.favChar = 'c';
    // jw.salary = 120000000;
    // cout<<"The value is "<<.eId<<endl; 
    // cout<<"The value is "<<.favChar<<endl; 
    // cout<<"The value is "<<jw.salary<<endl; 
    return 0;
}
