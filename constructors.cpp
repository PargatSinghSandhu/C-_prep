#include<iostream>
using namespace std;


class kld
{
    private:
        int machine;
        char names;
        
    public:
    kld() //default constructor
    {
        machine=6;
        names='p';
    }
    
    kld (int count, char name) // parameterized constructor 
    {
        machine=count;
        names=name;
    }
    
    kld(kld &t) //copy constructor
    {
        machine = t.machine;
        names=t.names;
    }
    ~kld() {}//destructor 
    void display()
    {
        cout<<machine<<names;
    }
    
};

int main()
{
    kld obj1;
    obj1.display();
    
    kld obj2(6,'k');
    obj2.display();
    
    kld obj3 = obj2; 
    obj3.display();
    return 0;
}
