#include<bits/stdc++.h>

using namespace std;
class Node
{
    public:
        int data;
        Node *next; // we are storing the pointer, beacuse it is pointing to the next node address.  
    public:
     Node(int data1)
     {
        data= data1;
        next = nullptr;
     }
};

Node * arraytolinkedlist(vector<int> &arr)
{
    // first we have to create a head . and that will be a new node, and a head will point towards it  
     Node*head = new Node(arr[0]);
     //now we need a mover variabe which will move from head to end node, making a arraytolinkedlist
     Node * mover = head;
     
     for(int i=1 ; i<arr.size() ; i++)
     {
         //now every time we create a new node and mover will take care of that 
         
         Node * temp = new Node ( arr[i]);
         
         mover->next=temp;
         mover = temp;
     }
     return head;
}

Node *traverse(vector<int> &arr, Node*temp)
{
    
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp = temp->next;
    }
    return 0;
    
}

void length(vector<int>&arr, Node*temp)
{
    int count=0;
    
    while(temp!=NULL)
    {
        temp= temp->next;
        count++;
    }
    cout<<count;
}

int check( Node*temp, int ele)
{
    while(temp!=NULL)
    {
        if(temp->data==ele)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    
    Node*head = arraytolinkedlist(arr);
    
    //Node x = Node(2, nullptr); // this is just the object 
    //Node* y = &x; // this is pointer, will call 
    
    //Node* y =new Node(arr[0], nullptr); // this is the better way  
    Node *temp = head; // never ever change the head, try to use another variable 
    //traverse(arr);
    int ele= 8;
    //length(arr, temp);
    cout<<check(temp, ele);
}
