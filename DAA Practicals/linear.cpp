//PRACTICAL ONE.ONE
#include <iostream>
using namespace std;
int linear(int size, int key, int arr[], int pos[])
{
    int i = 0, count = 0;
    for (i; i < size; i++)
    {
        if (arr[i] == key)
        {
            pos[count] = i + 1;
            count++;
        }
    }
    if (count == 0)
    {
        pos[0] = -1;
    }
    return count;
}
int main()
{
    system("CLS");
    int n, i = 0, key;
    cout << "Enter total Numbers of array elements you want : ";
    cin >> n;
    int arr[n], pos[n];
    cout << "Enter Array Elements : ";
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    i = 0;
    cout << "Array Elements are : ";
    while (i < n)
    {
        cout << " " << arr[i];
        i++;
    }
    cout << "\nEnter element to be searched : ";
    cin >> key;
    int count = linear(n, key, arr, pos);
    if (pos[0] == -1)
    {
        cout << "Element Not in Array";
    }
    else
    {
        for (i = 0; i < count; i++)
        {
            cout<<"\n"<<key<<" found at : " <<pos[i];
        }
    }
}