/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>
#include<memory>

using namespace std;

class Book
{
   public:
        string title;
        string name;
        
        Book(string t, string n) : title(t), name(n) {}
};

int main()
{
    //staic object creation in heap
    Book myBook("C++", "Bjarne");
    myBook.title="C++++";
    myBook.name="Bjarneeee";
    
    //dyanmic
    
    Book *myBook2 = new Book("C21", "pojarne"); // it is a pointer pointing to a new object in heap, here we need to call the values to intilize in this constructor
    myBook2->title="C";
    myBook2->name="strau";
    
    delete myBook2; //deallocation
    
    //dyanmic using vector 
    
    //we need to create the vector 
    //vector<int> vec;
    
    vector<Book*> vec; // a vector of pointer of book objects <classname>
    
    //we can add or remove in vector
    
    vec.push_back(new Book("c++", "helen"));
    vec.push_back(new Book("java", "preto"));
    
    //for(int i : vector)
    
    for(Book* book : vec)
    {
        cout<<book->title<<book->name;
    }
    
    //can also be done as 
    // vec[0]->title;
    // vec[1]->name;
    
    //delete pointer
    for(Book* book : vec)
    {
        delete book;
    }
    
    
    
    shared_ptr<Book> sharePtr = make_shared<book>("C++", "pip");
    
    shared_pt<Book> sharePtr2 = sharePtr;
    
    
    shared+ptr<class_name> pointer name = make_shared<class_name)("pop", "sds")
    
    shared_ptr<Book> poiinttt = 
    cout<<"book"<<sharePtr->title<<
    
    
    //vector pointer
    
    vector<Book
    
    
        // When ptr1 and ptr2 go out of scope, the memory will be freed

    
    
    
    
    
    
    return 0;
}
