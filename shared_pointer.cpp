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
   
   shared_ptr<MyClass>Ptr1 = make_shared<MyClass>();
   
   cout<<"Shared Counter"<<Ptr1.use_count()<<endl;
   
   {
     shared_ptr<MyClass>Ptr2 = Ptr1;
     cout<<"Shared Counter"<<Ptr1.use_count()<<endl;
   }
   
   cout<<"Shared Counter"<<Ptr1.use_count()<<endl;
   
    
    //cout<<unPtr1;
    return 0;
}
