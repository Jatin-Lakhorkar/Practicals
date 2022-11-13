#include <iostream>
using namespace std;
int main()
{
    system("CLS");
    cout << "Aim : Program to print full pyramid using\nName: Jatin Lakhorkar  Roll No : 68\n\n";
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }cout<<"\n";
    }
    return 0;
}