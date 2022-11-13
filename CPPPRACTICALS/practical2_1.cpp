#include<iostream>
#include<conio.h>
using namespace std;
class Student{
    public:
    void getdata();
    void putdata();
    private:
        int b_day, b_month, b_year;
        string name, addr, gender,ph_no,br;
    };
void Student::getdata(){
    cout << "\n_______________________________________________________________";
    cout << "\n_________________Enter Your Admission Details__________________";
    cout << "\nEnter Your Name : ";
    getline(cin,name);
    cout << "\nEnter Your Date Of Birth(In Number Only) : ";
    cout<<"\nDAY : ";
    cin >> b_day;
    cout<<"MONTH : ";
    cin >> b_month;
    cout<<"YEAR : ";
    cin >> b_year;
    cout<<"\nEnter Your Gender(Male(M) or Female(F) or Others(O)) : ";
    cin>>gender;
    cout << "\nEnter Your Phone Number : ";
    cin >> ph_no;
    cin.ignore(); //Ignores the new line and clears the stream buffer.
    cout << "\nEnter Your Address : ";
    getline(cin, addr);
    cout << "\nBranch : ";
    getline(cin, br);
    cout << "\n______________________________________________________________";
}
void Student::putdata()
{

    cout << "\n_______________________________________________________________";
    cout << "\n_______________________Entered Details_________________________";
    cout << "\nName : "<<name;
    cout << "\nDate Of Birth : " << b_day << "/" << b_month << "/" << b_year;
    cout << "\nGender : "<<gender;
    cout << "\nPhone Number : "<<ph_no;
    cout << "\nAddress : "<<addr;
    cout << "\nBranch : "<<br;
    cout << "\n_______________________________________________________________";
}
int main(){
    system("CLS");
    cout << "Aim :Write a program using class to read and display ADMISSION details of a student.\nName: Jatin Lakhorkar  Roll No : 68";
    Student s1;
    s1.getdata();
    s1.putdata();
    return 0;
}
