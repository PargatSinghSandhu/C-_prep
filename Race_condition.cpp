*The issue in your code lies in the fact that multiple threads are concurrently accessing and modifying the shared variable myAmount without proper synchronization. 
This leads to a race condition, where the final result is unpredictable and often depends on the timing of the thread execution.*




#include<iostream>
#include<thread>

using namespace std;

int myAmount=0;

void addMemory()  
{
    ++myAmount;
    
}

int main()
{
    std:thread thread1(addMemory);
    std::thread thread2(addMemory);
    
    
    thread1.join();
    thread2.join();
    
    cout<<myAmount;
    return 0;
}
