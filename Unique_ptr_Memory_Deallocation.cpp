#include<iostream>
#include<memory>

using namespace std;



class MyClass
{
    
    public:
        MyClass()
        {
            cout<<"Constructor Called"<<endl;
        }
    
        ~MyClass()
        {
            cout<<"Destructor Called";
        }
};


//automatic memory deallocation 

int main()
{
   
   {  
    unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
   }
    
    //cout<<unPtr1;
    return 0;
}
