#include <iostream>
using namespace std;
class Base
{
public:
    int length = 20, height = 10;
    float half = (float)1 / 2;
    virtual void area()
    {
        cout << endl
             << "Area of Rectangle : " << length * height;
    }
};
class Derived : public Base
{
public:
    //Function Overrided.
    void area()
    {
        cout << endl
             << "Area of Triangle : " << half * length * height;
    }
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program to calculate area of rectangle and triangle demonstrating function overriding.\nName: Jatin Lakhorkar  Roll No : 68";
    Derived d;
    Base b, *ptr; //initializing Pointer to Base Class
    ptr = &d;     //derived class function with the help of Base class object.
    ptr->area();
    ptr = &b; //Base class function with the help of Dervied class object.
    ptr->area();
    return 0;
}
