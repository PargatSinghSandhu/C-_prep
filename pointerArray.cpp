#include<iostream>
#include<stdio.h>

using namespace std;

    int findMin(int arr[], int size)
    {
        int min=arr[0];
        
        for(int i=1 ; i<size ;i++)
        {
            if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        return min;
    }
    
    int findMax(int arr[], int size)
    {
        int max = arr[0];
        
        for(int i=0 ; i<size; i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        return max;
    }
    //in the below case I am not using pointer in front of arrray
    //becuse in c++, array in every case passed as a refernce, and it points to the address of the first element(this is known as array decay to pointer)
    //
    void findMinMax(int arr[], int *size, int *min , int *max) // i am not creatin the copy of min, max and size by using the pointer to the memory block directly.
    {
        for(int i = 0 ; i<*size ;i++)
        {
            if(*(arr+i)<*min) *min=arr[i];
            if(*(arr+i)>*max) *max= arr[i];
        }
    }

int main()
{   
    
    
    int arr[5]={100,2,20,-3,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Minimum of Array is :"<<findMin(arr, size )<<endl;
    cout<<"Maximum of Array is :"<<findMax(arr, size)<<endl;
    int min = arr[0]; // this will be in stack 
    int max= arr[0];
    findMinMax(arr, &size, &min, &max);
    
    cout<<"With pointer"<<endl;
    cout<<"Max : "<<max<<endl;
    cout<<"Min :"<<min<<endl;
    
    
    //pointer 
    
    
    
    return 0;
}
