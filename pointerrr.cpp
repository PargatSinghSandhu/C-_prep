
#include <iostream>
using namespace std;
int main()
{
    char c1[6]="Hello";
    
    char* c2; 
    
    c2 = c1; //this will give the address of the whole block and we can print the whole string ;
    
    cout<<c2<<endl;
    
    char *c3;
    
    c3 = c1;
    
    cout<<c3[4]<<endl;
    
    cout<<(c2+1);   // if we need the address of the specific element then we can do it like this 
    

    return 0;
}
