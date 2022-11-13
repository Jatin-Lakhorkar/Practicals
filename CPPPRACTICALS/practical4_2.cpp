#include<iostream>
using namespace std;
class Mother //Base Class one
{
public:
    string e_name;
    int eid;
    void getdata1()
    {
        cout << "\n____________________________________________________________________________\n";
        cout << "\nEnter Employee Name : ";
        getline(cin, e_name);
        cout << "Enter Employee ID :";
        cin >> eid;
    }
    void putdata1()
    {
        cout << "\nEmployee Name : " << e_name << endl;
        cout << "Employee ID : " << eid << endl;
    }
};
class Father //Base Class two
{
public:
    string branch;
    void getdata2()
    {
        cout << "Enter Branch Name : ";
        cin>>branch;
    }
    void putdata2()
    {
        cout << "Branch Name : " << branch << endl;
    }
};
// Sub class inheriting from Base Class(Mother and Father)
class Child : public Mother,public Father
{
public:
    int ph_no;
    void getdata()
    {
        cout << "Enter Your Phone Number : ";
        cin >> ph_no;
        cout << "____________________________________________________________________________\n";
    }
    void putdata()
    {
       cout << "Phone Number : " << ph_no << endl;
       cout << "____________________________________________________________________________\n";
    }
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program to read and print employee information using Multiple inheritance.\nName: Jatin Lakhorkar  Roll No : 68";
    Child chil;
    chil.getdata1();
    chil.getdata2();
    chil.getdata();
    chil.putdata1();
    chil.putdata2();
    chil.putdata();
    return 0;
}


