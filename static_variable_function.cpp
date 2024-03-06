#include<iostream>
using namespace std;

class counter
{
    private:
    static int count; // declaration inside the class
    
    public:
    counter()
    {
        count++;
        
    }
    void display()
    {
        cout<<"Count"<<count;
    }
    static int countfunction() // this is the static function 
    {
        return count;
    }
    
};

int counter::count=0; // innitilization outside the class 

int main()
{
    counter obj1;
    counter obj2;
    
    obj2.display();
    counter obj3;
    cout<<endl;
    cout<<"After static function"<<obj3.countfunction();
    return 0;
}
