#include <iostream>
using namespace std;
int main()
{
    system("CLS");
    cout << "Aim : Write a C++ program to check whether the input number is even or odd.\nName: Jatin Lakhorkar  Roll No : 68";
    int num;
    cout << "\n\nEnter any Integer : ";
    cin>>num;
    if(num%2==0){
        cout<<num<<" Number is EVEN.";
    }else{ 
        cout<<num<<" Number is ODD.";
        }
    return 0;
}