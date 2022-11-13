#include <iostream>
using namespace std;
class Base
{
public:
    virtual void item(int CP, int SP)
    {
        cout << endl
             << "Product Cost Price (MRP) : " << CP;
        cout << endl
             << "Product Selling Price : " << SP;
    }
};
class Derived : public Base
{
public:
    void item(int CP, int SP)
    {
        if (SP > CP)
            cout << endl
                 << "Profit Gained : " << SP - CP;
        else if (CP == SP)
            cout << endl
                 << "No profit nor Loss";
        else
            cout << endl
                 << "Loss Incurred : " << CP - SP;
    }
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program to calculate profit and loss for an item demonstrating function overriding.\nName: Jatin Lakhorkar  Roll No : 68";
    int cost, sell;
    cout << endl
         << "Product Cost Price (MRP) : ";
    cin >> cost;
    cout << "Product Selling Price : ";
    cin >> sell;
    Derived d;
    Base b, *ptr;          //initializing Pointer to Base Class
    ptr = &b;              //Initializing base Class Object to base class pointer.
    ptr->item(cost, sell); //Base class function with the help of Dervied class object.
    ptr = &d;              //Initializing derived Class Object to base class pointer.
    ptr->item(cost, sell); //derived class function with the help of Base class object.
    return 0;
}
