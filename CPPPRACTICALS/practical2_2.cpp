#include <iostream>
using namespace std;
class Square
{
private:
    float len;

public:
    void getData();
    float findArea();
    float findPerimeter();
};
void Square::getData()
{
    cout << "\nEnter the Length of Square: ";
    cin >> len;
}
float Square::findArea()
{
    return (len * len);
}
float Square::findPerimeter()
{
    return (4 * len);
}
int main()
{
    system("CLS");
    cout << "Aim : Write a program using class to calculate area and perimeter of square.\nName: Jatin Lakhorkar  Roll No : 68";
    Square s;
    float area, per;
    s.getData();
    area = s.findArea();
    per = s.findPerimeter();
    cout << "\nArea of Square = " << area;
    cout << "\nPerimeter of Square = " << per;
    cout << endl;
    return 0;
}
