#include<iostream>
#include<thread>

using namespace std;

void function1(char op)
{
    for(int i=0 ; i<200 ; i++)
    {
        cout<<op;
    }
    
}

void function2(char kp)
{
    for(int j=0 ; j<200 ;j++)
    {
        cout<<kp;
    }
}

int main()
{
    thread thread1(function1, 'o');    //thread thread name (funtion, parameters)
    thread thread2 (function2, 'p'); 
    thread1.join();
    thread2.join();
    return 0;
}
