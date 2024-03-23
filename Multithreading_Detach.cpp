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
    std::this_thread::sleep_for(chrono::seconds(2));
}

int main ()
{ 
    std::thread t1(run, 10);
    cout<<"main()"<< endl;
    
    t1.detach(); // it detaches the thread from the parent thread!, os no longer wants to wait for the thread 
    
    cout<<"End here";
    return 0;
}
