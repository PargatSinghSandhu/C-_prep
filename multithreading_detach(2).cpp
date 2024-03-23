#include<iostream>
#include<thread>
#include<chrono>

using namespace std;

void run(int count)
{
    while(count-->0)
    {
        cout<<"Multi-Threading"<<endl;
    }
    
}

int main ()
{ 
    std::thread t1(run, 10);
    cout<<"main()"<< endl;
    std::this_thread::sleep_for(chrono::seconds(2)); //now it will work because it is giving more time to the thread
    t1.detach(); // it detaches the thread from the parent thread!, os no longer wants to wait for the thread 
    
    cout<<"End here";
    return 0;
}
