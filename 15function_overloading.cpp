#include<iostream>
using namespace std;

// volume of a cube
int volume(int a)
{
    return (a*a*a);
}

// volume of a cylinder
int volume(int r, int h)
{
    return (3.14*r*r*h);
}

// volume of a rectangular box
int volume(int l, int b, int h)
{
    return (l*b*h);
}

int main()
{
    cout<<"The of volume of a cube with lenght 3 is "<<volume(3)<<endl;
    cout<<"The of volume of a cylinder with lenght 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"The of volume of a rectange with lenght 3, breadth 6 and height 7 is "<<volume(3,6,7)<<endl;
    
    return 0;
}