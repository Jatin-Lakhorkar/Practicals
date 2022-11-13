#include <iostream>
using namespace std;
int main()
{
    system("CLS");
    cout << "Aim : Write a program in C++ that takes a number as input and prints its multiplication table upto 10.\nName: Jatin Lakhorkar  Roll No : 68";
    int num;
    cout << "\n\nEnter any Integer : ";
    cin>>num;
    cout<<"Multiplication Table of "<<num<<" Upto 10\n";
    for(int i=1;i<=10;i++){
    cout<<"\n"<<num<<" X "<<i<<" = "<<num*i;
    }
    return 0;
}