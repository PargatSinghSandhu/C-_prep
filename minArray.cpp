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


int main()
{   
    
    
    int arr[5]={100,2,20,-3,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findMin(arr, size );
    return 0;
}
