#include<iostream>
using namespace std;
class Parent //Base Class
{
    public:
        string s_name;
        int roll;
        void getdata()
        {
            cout << "\n____________________________________________________________________________\n";
            cout << "Enter Student Name : ";
            getline(cin,s_name);
            cout<<"Roll Number :";
            cin>>roll;
        }
        void putdata()
        {
            cout << "\n____________________________________________________________________________\n";
            cout <<"\nStudent Name : "<<s_name << endl;
            cout <<"Roll Number : " << roll << endl;
        }
};
// Sub class inheriting from Base Class(Parent)
class Child:public Parent
{
    public:int ph_no;
    void getdata(){
        Parent::getdata();//Calling Base Class Function through Scope Resolution Operator
        cout<<"Enter Your Phone Number : ";
        cin>>ph_no;
        cout << "____________________________________________________________________________\n";
    }
    void putdata()
    {
        Parent::putdata(); //Calling Base Class Function through Scope Resolution Operator
        cout << "Phone Number : " << ph_no << endl;
        cout << "____________________________________________________________________________\n";
    }
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program to read and display student's information using Single inheritance.\nName: Jatin Lakhorkar  Roll No : 68";
    Child dis;
    dis.getdata();
    dis.putdata();
    return 0;
}


