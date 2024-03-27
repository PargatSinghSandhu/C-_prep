#include<iostream>
#include<memory>

using namespace std;



int main()
{
     
    unique_ptr<int>unPtr1 = make_unique<int> (25);
    //unique_ptr<int>unPtr2 = unPtr1; // will get a error here, because unique pointer can not be copied
    
    //how we can do that then, by moving
    
    unique_ptr<int> unPtr2 = move(unPtr1);
    
    //cout<<unPtr1;
   // cout<<*unPtr1; //derefernecing is getting the value 
    //cout<<*unPtr1; //if we want to print the unPtr1, then it will show the NULL value, because the owner of the memory address has been moved to unPtr2
    
    cout<<*unPtr2;
    
    
    
    //cout<<unPtr1;
    return 0;
}
