#include <iostream>
using namespace std;
class Product
{
public:
    void get_product_list();
    int p1[20], total = 0, pno;
};
void Product::get_product_list()
{
    cout << "\n_________________Enter any 10 items price__________________\n";
    for (int i = 0; i <= 9; i++)
    {
        cout << "Enter product no." << i + 1 << " price : ";
        cin >> p1[i];
    }
    for (int j = 0; j <= 9; j++)
    {
        if (p1[0] < p1[j])
        {
            p1[0] = p1[j];
            pno = j;
        }
        total += p1[j];
    }
    cout << "\n_______________________________________________________________";
    cout << "\n\nLargest price in List is of product " << pno + 1 << " : " << p1[0];
    cout << "\n\nTotal price of products : " << total;
    cout << "\n_______________________________________________________________\n\n";
}
int main()
{
    system("CLS");
    cout << "Aim : Write a program using class to store price list 10 items and print the largest price as well as the sum of all the prices.\nName: Jatin Lakhorkar  Roll No : 68";
    Product p;
    p.get_product_list();
    return 0;
}
