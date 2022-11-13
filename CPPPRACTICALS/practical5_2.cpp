#include <iostream>
using namespace std;
class Interest
{   float amount, rate;
    public:
    void simpleInterest(float principle, float roi)
    {
        amount=principle;
        rate=roi;
    };
    float simpleInterest(int time) { return ((amount * rate * time) / 100); }//function overloaded.
};
int main()
{
    system("CLS");
    cout << "Aim : Write a program in C++ to calculate interest amount using function overloading.\nName: Jatin Lakhorkar  Roll No : 68";
    float p, r;
    int t;
    Interest si;
    cout <<endl<< " Input the Principle: ";
    cin >> p;
    cout <<endl<< " Input the Rate of Interest: ";
    cin >> r;
    si.simpleInterest(p, r);
    cout <<endl<< " Input the Time (In Years) : ";
    cin >> t;
cout <<endl<<"The Simple interest for the amount "<<p<<" for " <<t<<" years @ "<<r<<"% is: "<<si.simpleInterest(t)<<endl;
        return 0;
}
