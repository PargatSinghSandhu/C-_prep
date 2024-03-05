#include<iostream>
using namespace std;

class akhi
{
    private:
         int kitchen=10;
    
    protected:
        int room=2;
    
    public:
    
        double akhip()
        {
           return kitchen*room; // we are doing inistilization here 
          
         }
    
    
    friend class Pargat; // here friend class Pargat is defined inside the class akhi, and now it can access anything of class akhi.
    
};

class Pargat
{
    public:
    
        void display(akhi &ak)
        {
            cout<<ak.akhip();
        }
    
    
};


int main ()
{
    akhi a;
    Pargat p;
    p.display(a); /// to display the items and access the parent we have to pass the object.
    return 0;
}
