#include<iostream>
using namespace std;

class Student
{   
    protected:
        int rollNo;
    public:
        void setRollNo(int a)
        {
            rollNo = a;
        }
        void displayRollNo()
        {
            cout<<"Students roll no is "<<rollNo<<endl;
        }
};

class Test : virtual public Student
{
    protected:
        float physics, maths;
    public:
        void setMarks(float m1, float m2)
        {
            physics = m1;
            maths = m2;
        }
        void displayMarks()
        {
            cout<<"Your result is out :"<<endl
            <<"Physics: "<<physics<<endl
            <<"Maths: "<<maths<<endl;
        }
};

class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void setScore(float scr)
        {
            score = scr;
        }
        void displaayScore()
            {
                cout<<"Your score is "<<score<<endl;
            }
};

class Result : public Test, public Sports
{
    private:
        float total;
    public:
        void display()
        {
            total = maths + physics + score;
            displayRollNo();
            displayMarks();
            displaayScore();
            cout<<"Your total score is "<<total<<endl;
        }        
};

int main()
{
    Result jw;
    jw.setRollNo(999);
    jw.setMarks(89, 93);
    jw.setScore(9);
    jw.display();
    return 0;
}