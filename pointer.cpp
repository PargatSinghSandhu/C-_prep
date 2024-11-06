#include<iostream>

using namespace std;

int main()
{
    int n =5 ; 
    
    int * ptr = &n ; //this will give the value on that address
    
    cout<<*ptr; //defrefrencing the pointer 
    
    *ptr = 20;
    
    cout<<n;
    
    cout<<endl;
    cout<<"New Code-Part2"<<endl;
    
    
    int new2 =90;
    int * ptr2 = &new2;
    *ptr2 = 880;
    
    cout<<*ptr2;
    cout<<new2;
    
    return 0;
    
}
