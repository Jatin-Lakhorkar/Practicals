#include <iostream>
using namespace std;
class Weight
{
    int a = 0, b = 0;

public:
    int sumWeight(void)
    {
        return a + b;
    }
    void left()
    {
        cout << endl
             << "\nEnter the weight of a :";
        cin >> a;
    }
    void right()
    {
        cout << endl
             << "Enter the weight of b :";
        cin >> b;
    }
    Weight operator+(const Weight &add) //Operator Overloaded through Copy Constructor
    {
        Weight addition;
        addition.a = a + add.a;
        addition.b = b + add.b;
        return addition;
    }
};
int main()
{
    system("CLS");
    cout << "Aim : Write a program in C++ to overload '+' operator to add weight (in kilogram, gram and milligram) of two objects.\nName: Jatin Lakhorkar  Roll No : 68";
    Weight add1, add2;
    add1.left();
    add2.right();
    Weight add3 = add1 + add2;
    cout << endl
         << "Addition of weight : " << add3.sumWeight();
    return 0;
}
