/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;



int main()
{
    cout<<"Let's study the pointer"<<endl;
    int arr[5]={1,2,3,4,5};
    
    cout<<arr<<endl; //address of the first memory block
    
    cout<<arr[0]<<endl; //first element
    
    cout<<*arr<<endl; // this is dereferecning the first element
    
    cout<<*(arr+2)<<endl<<"next"; // address + artithimetic opearation, and then we are dereferrncing that element
    
    for(int i=0 ; i<7 ;i++)
    {
        cout<<*(arr+i)<<endl;
    }
    
    
    

    return 0;
}
