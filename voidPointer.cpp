#include<iostream>

using namespace std;

void printVoid(void*number, char type) // void pointer void*number
{
    cout<<"We will print void pointer after getting it's type : ";
    switch(type)
    {
        case 'i': cout<<*((int*)number)<<endl; break; // first we are doing the type conversion of the pointer and then derefencing it. 
        case 'c': cout<< *((char*)number)<<endl; break; //first we are doing type conversion of the pointer and then derefecning it.
    }
}


int main()
{
    int number = 10;
    char letter = 'p';
    
    printVoid(&number, 'i');
    printVoid(&letter, 'c');
    
    return 0;
    
}
