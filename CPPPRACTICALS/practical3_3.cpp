#include<iostream>
using namespace std;
class fare
{
    float total,travel,price;
public:
    fare(){} //Default Constructor created.
    fare(float distance,float rate) //Parameterized Constructor created.
    {
        travel=distance;
        price=rate;
    }
    fare(fare &obj) //Copy Constructor created.
    {
        travel=obj.travel ;
        price=obj.price;
    }
    float fareCalculate(){
        total=travel*price;
        return total;
    }
    ~fare() { cout << "\nDestructor Invoked"; }
};
int main()
{
    system("CLS");
    cout << "Aim :Write a C++ program using class to calculate total travelling fare based on distance travelled with the help copy constructor.\nName: Jatin Lakhorkar  Roll No : 68";
    float rateperkm,dist;
    cout << "\n ______________________________________________\n";
    cout << " Enter the Rate Per Killometer : ";
    cin >> rateperkm;
    cout << " Enter Distance Travelled in KM: ";
    cin >> dist;
    fare f(dist,rateperkm);
    cout << "\n_________________________________________________________________________\n";
    cout << " \n(Parameterized)Total Fare For " << dist << " KM Travelled : " << f.fareCalculate();
    fare f2=f;//Copy Constructor Invoked.
    cout << " \n(Copy)Total Fare For "<<dist<<" KM Travelled : " << f2.fareCalculate();
    cout << "\n_________________________________________________________________________\n";
    return 0;
}

