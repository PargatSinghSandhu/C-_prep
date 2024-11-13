#include<iostream>

using namespace std;

    void printArray(int arr[], int &size)
    {
         cout<<"Enter the array"<<endl;
         
         for(int i=0 ;i<size ;i++)
         {
             cin>>*(arr+i);
         }
         
          cout<<"Display the array"<<endl;
         
         for(int i=0 ;i<size; i++)
         {
             cout<<*(arr+i);
         }
    }

int main()
{
    int size;
    cout<<"Enter the size of an array";
    cin>>size;
    
    int *arr = new int[size]; //dynamic allocation, new memory block in the heap
    
    printArray(arr,  size);
    
    
    //when new memory allocated in a heap, it needs to be deallocated as well otherwise it leads to 
    //memory leakage
    delete[] arr;
    arr= nullptr;
}
