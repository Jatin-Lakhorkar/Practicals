//PRACTICAL TWO.THREE
#include <iostream>
using namespace std;
void insertionSort(int size,int arr[]){
 int i, j,v;
    for (i = 0; i < size; i++)   
    {   v=arr[i];
        j=i;
        while(arr[j-1]>v && j>=1){
            arr[j]=arr[j-1];
            j--;
        }
     arr[j]=v;
    }
}
int main()
{
    int n, i = 0;
    cout << "Enter total Numbers of an array elements you want : ";
    cin >> n;
    int arr[n];
    cout << "Enter Unsortted Array Elements : ";
    while (i < n)
    {
        cin >> arr[i];
        i++;
    }
    i = 0;
    cout << "Unsortted Array Elements are : ";
    while (i < n)
    {
        cout << " " << arr[i];
        i++;
    }
    insertionSort(n,arr);
    cout<<"\nSorted Array (insertion Sort) : ";
    for(i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

}