#include<iostream>
using namespace std;
void heapify(int arr[], int n, int i) {
  // Find largest among root, left child and right child
  int largest = i;
  int left = 2 * i + 1;
  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])
    largest = left;

  if (right < n && arr[right] > arr[largest])
    largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
      swap(arr[i],arr[largest]);
      heapify(arr, n, largest);
  }
}

  // main function to do heap sort
  void heapSort(int arr[], int n) {
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(arr[0], arr[i]);
      // Heapify root elements to get highest element at root again
      heapify(arr, i, 0);
    }
  }
  
  // Print an array
  void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
      cout << arr[i] << " ";
    cout << "\n";
  }
//Driver Code  
int main()
{

    int total_elm;
    cout<<"AIM : To implement and analyze sortin algorithm having logarithmic time complexity\nName : Jatin Lakhorkar\tRoll No : 49\tBatch : C2 \n";
    cout<<"Enter total number of elements in heap : ";
    cin>>total_elm;
    int elements[total_elm],i;
    cout<<"\nEnter the elements : ";
    for ( i = 0; i < total_elm; i++)
    {
        cin>>elements[i];
    }
    heapSort(elements,total_elm);
    cout << "\nSorted array is :";
    printArray(elements,total_elm);
    return 0;
}
