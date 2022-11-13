#include <iostream>
using namespace std;
int main()
{
    system("CLS");
    cout << "Aim : Write a C++ program to read and display your name and roll number.\nName: Jatin Lakhorkar  Roll No : 68";
    string name; int roll;
    cout << "\n\nEnter Your Name : ";
    getline(cin,name);
    cout << "\nEnter Your Roll Number : ";
    cin>>roll;
    cout<<"Hello "<<name<<",\nYour Roll Number is : "<<roll;
    return 0;
}
