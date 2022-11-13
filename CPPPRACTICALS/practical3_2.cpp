#include <iostream>
using namespace std;
class simpleInterest
{
public:
    simpleInterest();//Default Constructor.
    simpleInterest(float principle, float roi, int time) //Parameterized Constructor.
    {
        float si;
        cout << "\n____________________________________________________________________________\n";
        si = (principle * roi * time) / 100;
    cout << " The Simple interest for the amount "<<principle<<" for "<<time<<" years @ "<<roi<<" % is: "<<si<< endl;
        cout << "____________________________________________________________________________";
    }
    ~simpleInterest() { cout << "\nDestructor Invoked"; }
};
int main()
{
    system("CLS");
    cout << "Aim :Write a program using class to calculate Simple Interest with the help of Parameterized constructor.\nName: Jatin Lakhorkar  Roll No : 68";
    float p, r;
    int t;
    cout << "\n _______________________________________\n";
    cout << " Input the Principle: ";
    cin >> p;
    cout << " Input the Rate of Interest: ";
    cin >> r;
    cout << " Input the Time (In Years) : ";
    cin >> t;
    simpleInterest s=simpleInterest(p,r,t);//Explicit Call
    return 0;
}
