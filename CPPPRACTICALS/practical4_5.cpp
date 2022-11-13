#include <iostream>
using namespace std;

class Student
{
public: int roll;
    void getA()
    {
        cout << "\nEnter Roll Number : ";
        cin>>roll;
    }
    void putA()
    { 
        cout << "Roll Number :"<<roll<<endl;
    }
};
//Class Student is Declared as Virtual
class Test: public virtual Student 
{
public: int mark1,mark2;
    void getB()
    {
        cout << "Enter Test 1 And Test 2 Marks : ";
        cin>>mark1>>mark2;
    }
    void putB()
    {
        cout <<"Test 1 and Test 2 Marks :"<<mark1<<" "<<mark2<<endl;
    }
};
//Class Student is Declared as Virtual
class Sports : public virtual Student
{
public: int score;
    void getC()
    {
        cout << "Enter Sports Score : ";
        cin>>score;
    }
    void putC()
    {
        cout << "Sports Marks : "<<score<<endl;
    }
};
//Class Result inherits class test and class sports.
class Result : public Test, public Sports
{
public:
    void putD()
    {   
        cout << "\nResult : \n"<<mark1+mark2+score;
    }
};
int main()
{   system("CLS");
    cout << "Aim :Write a C++ program to show working of Virtual Base Class.\nName: Jatin Lakhorkar  Roll No : 68";
    Result obj;
    obj.getA();
    obj.getB();
    obj.getC();
    obj.putA();
    obj.putB();
    obj.putC();
    obj.putD();
    return 0;
}

