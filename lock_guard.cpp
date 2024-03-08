#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

std::mutex m;

int myAmount =0 ;

void amount()
{
    std::lock_guard<std::mutex> lock(m); // now instead of using lock and unlock, I used this, cuz now I don't have to write unlock
    ++myAmount;
   
}


int main()
{
    thread thread1 (amount);
    
    thread1.join();
    cout<<myAmount;
    
    return 0;
}
