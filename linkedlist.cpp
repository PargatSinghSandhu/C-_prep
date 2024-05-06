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

int main()
{
    vector<int> arr = {2, 5, 8, 7};
    
    Node*head = arraytolinkedlist(arr);
    
    //Node x = Node(2, nullptr); // this is just the object 
    //Node* y = &x; // this is pointer, will call 
    
    //Node* y =new Node(arr[0], nullptr); // this is the better way  
    cout<<head->data;
}
