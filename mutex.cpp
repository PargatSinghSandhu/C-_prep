#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

int myAmount=0;

std::mutex m;

void addMemory()  
{
    m.lock();  // this will lock until the thread deos it work.
    ++myAmount;
    m.unlock(); // after the completion, the thread will unlock it.
    
}

int main()
{
    std::thread thread1(addMemory);
    std::thread thread2(addMemory);
    
    
    thread1.join();
    thread2.join();
    
    cout<<myAmount;
    return 0;
}
