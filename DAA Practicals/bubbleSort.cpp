// PRACTICAL TWO.ONE
#include <iostream>
using namespace std;
void bubbleSort(int size,int arr[]){
 int i, j;
 size=size-1; 
    for (i = 0; i < size; i++)     
     for (j = i+1; j <= size; j++) 
         if (arr[j] < arr[i])
            {  int temp = arr[i];    
                arr[i] = arr[j];    
                arr[j] = temp;     
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
    i=0;
    bubbleSort(n,arr);
    cout<<"\nSorted Array (bubble sort) : ";
    for(i;i<n;i++){
        cout<<" "<<arr[i];
    }

}