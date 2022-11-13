#include<iostream>
using namespace std;
class Calculator
{
    public:
        int calculate(int a,int b){ return (a+b);}
        int calculate(int a,int b, int c){return (a+b+c);}
        double calculate(double a, double b, double c){return (a+b+c);}
        int calculate(int a){return (a*a);}
        float calculate(int a, int b, float c, float d) { return (a+b+c+d); }
};
int main()
{
    system("CLS");
    cout << "Aim : Write a program in C++ to overload a function and perform :\ni. addition of two integer\nii. Addition of three integers\niii. Addition of three float numbers\niv. Square of one integer\nv. Addition of two integer and two float numbers.\nName: Jatin Lakhorkar  Roll No : 68";
    Calculator ad;
    cout<<endl<<"i.Addition of Two Integers : "<<ad.calculate(10,12)<<endl;
    cout<<"ii.Addition of Three Integers : "<<ad.calculate(10,12,24)<<endl;
    cout<<"iii.Addition of Three Float Numbers : "<<ad.calculate(12.34,4.56,7.890)<<endl;
    cout<<"iv.Square of One Integer : "<<ad.calculate(10)<<endl;
    cout<<"v.Addition of Two Integers And Two Float Numbers : " << ad.calculate(10,12,12.23,45.67)<< endl;
    return 0;
}
