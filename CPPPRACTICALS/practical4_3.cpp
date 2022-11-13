#include <iostream>
using namespace std;
class Super //Base Class
{
public:
    int n;
    void getdata1()
    {
        cout << "\nEnter Numbers : ";
        cin >> n;
    }
};
// Sub class inheriting from Super Class
class SubClass : public Super
{
public:
    int n1;
    void getdata2()
    {cin >> n1;}
};
// Derived class inheriting from Sub Class
class Derived : public SubClass
{
public:
    int n2;
    void getdata3()
    {cin >> n2;}
    void putdata()
    {cout << "Product Of Number "<<n<<" X "<<n1<<" X "<<n2<<": "<<n*n1*n2<<endl;}
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program demonstrating Multilevel Inheritance to find product of 3 numbers.\nName: Jatin Lakhorkar  Roll No : 68";
    Derived dis;
    dis.getdata1();
    dis.getdata2();
    dis.getdata3();
    dis.putdata();
    return 0;
}
