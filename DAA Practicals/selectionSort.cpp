//PRACTICAL TWO.TWO
#include <iostream>
using namespace std;
void selectionSort(int size,int arr[]){
 int i, j,temp,min;
    for (i = 0; i < size-1; i++)   
    { min=i;  
     for (j = i+1; j < size; j++) 
         {if (arr[j] < arr[min])
            min=j;   
         }
    temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
    }
}
int main()
{
    system("CLS");
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
    selectionSort(n,arr);
    cout<<"\nSorted Array (selection Sort) : ";
    for(i=0;i<n;i++){
        cout<<" "<<arr[i];
    }

}