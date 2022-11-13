//PRACTICAL ONE.TWO
#include <iostream>
using namespace std;
int binary(int size, int find, int arr[])
{
    int low = 0, mid, high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == find)
        {
            return mid+1;
        }
        if (arr[mid] < find)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    system("CLS");
    int n, i = 0, key;
    cout << "Enter total Numbers of array elements you want : ";
    cin >> n;
    int arr[n];
    cout << "Enter sortted Array Elements (Ascending order): ";
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
    int searchIndex = binary(n, key, arr);
    if (searchIndex == -1)
    {
        cout << "Element Not in Array";
    }
    else
    {
        cout << "Element found at " << searchIndex;
    }
}