#include<iostream>

using namespace std;



void callintt(int *number)
{
    cout<<*number;
    cout<<endl;
}

void callname(char *name)
{
    cout<<*name;
}

void call(void*ptr, char type) // this is void pointer, and a char type to find the type of the pointer
{
    cout<<"void Pointer"<<endl;
    switch (type)
    {
        case 'i': cout<<*((int*)ptr)<<endl; break;  // first we did the type casting, then storing the address, then derefernce it
        case 'c': cout<<*((char*)ptr)<<endl; break;
    }
}

void check(void *ptr)
{
    
    //cout<<ptr; // we can access the address but not the value because we dont know the type.
    //now to access that we need to convert that 
    
    cout<<*((int*)ptr);
}

int main()
{
    int number = 90;
    char name = 'p';
    
    //call(&number, 'i');
    //call(&name, 'c');
    
    check(&number);
    
    return 0;
    
}
