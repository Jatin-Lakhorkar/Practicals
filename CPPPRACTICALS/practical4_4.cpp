#include <iostream>
using namespace std;
class Number //Base Class
{
public:
    int n;
    void getdata()
    {
        cout << "\nEnter Number : ";
        cin >> n;
    }
};
// Sub class one inheriting from Base Class
class Square : public Number
{
public:
    void putdata()
    {
        cout << "Square Of Number " << n << " : " << n * n << endl;
    }
};
// Sub class two inheriting from Base Class
class Cube : public Number
{
public:
    void putdata()
    {
        cout << "Cube Of Number " << n <<" : " << n * n * n << endl;
    }
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program demonstrating hierarchical inheritance to get square and cube of a number.\nName: Jatin Lakhorkar  Roll No : 68";
    Square s;
    Cube c;
    s.getdata();
    s.putdata();
    c.getdata();
    c.putdata();
    return 0;
}
