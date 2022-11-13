#include <iostream>
using namespace std;
class Student
{
private:
    float avg;
    float marks;
public:
    void getData();
    float findPercentage();
};
void Student::getData()
{
    cin >>marks;
}
float Student::findPercentage()
{
    return (marks*100/500);
}

int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program using class and objects to stimulate result preparation system 5 students.\nName: Jatin Lakhorkar  Roll No : 68";
    Student s[10];
    int i;
    cout << "\n_______________________________________________________________\n\n";
    for(i=0;i<5;i++){
        cout << "\nEnter the Total marks(out of 500) of Student " <<i+1<< " : ";
        s[i].getData();}
    cout << "\n_______________________________________________________________\n\n";
    for(i=0;i<5;i++){
        cout << "\nStudent " << i + 1 << " secured : " << s[i].findPercentage() << " %";
    }
    cout << "\n_______________________________________________________________\n\n";
    return 0;
}


