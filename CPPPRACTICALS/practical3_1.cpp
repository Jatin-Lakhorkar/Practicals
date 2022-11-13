#include<iostream>
using namespace std;
#define PI 3.15159
class Circle{
    private:
    float radius,area,circumferance;
    public:
    Circle()//Default Constructor created.
    {
        cout << "\n_______________________________________________________________\n";
        cout<<"\nEnter Radius : ";
        cin>>radius;
        area=PI*(radius*radius);
        circumferance = 2 * PI * radius;
        cout << "_______________________________________________________________\n";
        cout<<"\nArea Of Circle : " <<area<<endl;
        cout << "The circumference of the circle is : " << circumferance << endl;
        cout << "_______________________________________________________________";
    }
    ~Circle(){cout<<"\nDestructor Invoked";}
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program using class to calculate area and circumference of circle with the help of default constructor.\nName: Jatin Lakhorkar  Roll No : 68";
    Circle c;
    return 0;
}
