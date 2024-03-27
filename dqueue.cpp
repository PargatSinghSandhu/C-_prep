#include<iostream>
using namespace std;

int dq[110];
int front = -1, rear = -1;

//in deque there are two insertions, first is front, and second is from back 
void front_insert(int value)
{
    if((front==0 && rear == size-1) || (front==rear+1)) // if the queue is full
    {
        cout<<"Queue is full";
    }
    
    else if ((front==-1) && (rear==-1)) //if the front and rear are at the -1
    {
        front = rear = 0;
        dq[front] = z;
    }
    
    else if(front == 0) // if we want to enter the value at the end of the end, then we have to front == maxsize-1
    {
        front = size-1;
        dq[front] = z;
    }
    
    else // if the above condition failed, then we have to add the value at the end 
    {
        front = front -1; //decreament
        dq[front] = z;
    }
    
}

void rear_insert(int z)
{
    //check if the queue is full
    if((front==0 && rear = size - 1) || rear+1 == front)
    {
        cout<<"queue is full";
    }
    
    //if the queue is empty 
    else if(front == -1 && rear == -1)
    {
        front = 0 ;
        dq[front] = z;
    }
    
    //if the rear at the end 
    else if(rear==size-1)
    {
        //so we put the rear at first 
        rear = 0;
        dq[rear] = z;
    }
    else // normal case, when the rear is at any point
    {
        rear++;
        dq[rear]=z;
    }
}

void front_deque()
{
    if((front==-1 && rear == -1)) // if the queue is empty
    {
        cout<<"Empty";
    }
    else if(front==rear) //if there's only one element
    {
        cout<<"Deleted Element"<<dq[front];
        front = -1;
        rear = -1;
    }
    else if(front==size-1) // front element at the end of the queue
    {
        cout<<"deleted element";
        front=0;
        
    }
    else
    {
        cout<<"Deleted Element" <<dq[front];
    }
}

void back_deque()
{
    //check is the queue is Empty
    if((front==-1 && rear == -1))
    {
        cout<<"There is no element to delete";
    }
    else if(front == rear) // one element
    {
        cout<<"deletion from the end"<<dq[rear];
        front = -1;
        rear= -1;
    }
    
    else if(rear == 0) // rear is at the beginig potion
    {
        cout<<"Deleted element"<<dq[rear];
    }
    
    else // normal case
    {
        rear= rear-1;
    }
}

void display()
{
    int i = front;
    while(i!=rear)
    {
        cout<<dq[i];
        i++;
        i%size;
    }
    cout<<dq[rear];
}


int main()
{
    front_insert(-5);
    front_insert(23);
    front_insert(17);
    rear_insert(17);
    rear_insert(12);
    rear_insert(47);
    display();
    front_dequeue();
    dequeue_rear();
    display();
    return 0;
}
