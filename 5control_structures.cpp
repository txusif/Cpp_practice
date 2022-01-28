#include<iostream>
using namespace std;
 
int main()
{
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    // If-else : selection control structure
    if (number%2==0){
        cout<<"It is an even number"<<endl;
    }

    else{
        cout<<"It is an odd number"<<endl;
    }

    // Switch-case : selection control structure
    int age;
    cout<<"Enter Your Age: "<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You're 18"<<endl;
        break;

    case 20:
        cout<<"You're 20"<<endl;
        break;

    case 22:
        cout<<"You're 22"<<endl;
        break;
    
    default:
    cout<<"No special cases";
        break;
    }
    
    return 0;
}