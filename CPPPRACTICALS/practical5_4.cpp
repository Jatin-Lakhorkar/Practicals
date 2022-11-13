#include <iostream>
using namespace std;
class Decrement
{
    int a = 0;

public:
    int decremented(void)
    {
        return a;
    }
    void get()
    {
        cout << endl
             << "\nEnter the number :";
        cin >> a;
    }
    Decrement operator--() //Operator Overloaded through Constructor
    {
        Decrement decrement;
        decrement.a = --a;
        return decrement;
    }
};
int main()
{
    system("CLS");
    cout << "Aim : Write a program in C++ to overload '--' operator to decrement value of an object.\nName: Jatin Lakhorkar  Roll No : 68";
    Decrement dec, dec2;
    dec.get();
    dec2 = --dec;
    cout << endl
         << "Decremented Value : " << dec2.decremented();
    return 0;
}
