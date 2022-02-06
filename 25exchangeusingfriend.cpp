#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    friend void exchange(c1 & , c2 &);
    public:
        void setData(int a){
            val1 = a;
        }

        void displayVal(void){
            cout<< val1 <<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void setData(int a){
            val2 = a;
        }

        void displayVal(void){
            cout<< val2 <<endl;
        }
};

void exchange(c1 &x, c2 &y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
}


int main(){
    c1 oc1;
    c2 oc2;

    oc1.setData(666);
    oc2.setData(999);
    exchange(oc1, oc2);

    cout<<"The value of c1 after exchanging becomes: ";
    oc1.displayVal();
    cout<<"The value of c2 after exchanging becomes: ";
    oc2.displayVal();
    
    return 0;
}
