#include<iostream>
#include<thread>

using namespace std;

class check
{
    private:
        int amount;
        int price;
        
    public:
     void except(int p, int a)
     {
         amount= a;
         price=p;
         
         if(price>amount)
         {
             throw "Out of Budget";  // when you have written throw, there is no need to write return! 
         }
     }
};


int main()
{
    check obj1;
    
    try
    {
    obj1.except(9,2); //when you know that you are faaing an error, or an exception, you must use eception handling!
    }
    catch (const char* exceptionMsg)
    {
        cout<<"exception msg";
    }
    
    return 0;
}
