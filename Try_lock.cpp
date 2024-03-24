#include<iostream>
#include<thread>
#include<chrono>
#include<mutex>

using namespace std;

std::mutex m ;
int amount = 0 ;

void test()
{
    for(int i= 0 ; i<12; i++)
    {
        if(m.try_lock())
        {
            ++amount;
            m.unlock();
        }
        
    }
    
    
}

int main()
{
    std::thread t1(test);
    std::thread t2(test);
    std::thread t3(test);
    std::thread t4(test);
    

    t1.join(); 
    t2.join();
    t3.join();
    t4.join();
    
    cout<<amount;
    
   
    
    return 0;
}
