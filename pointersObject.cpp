/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class Book
{
   public:
        string title;
        string name;
};

int main()
{
    //staic object creation in heap
    Book myBook;
    myBook.title="C++";
    myBook.name="Bjarne";
    
    //dyanmic
    
    Book *myBook2 = new Book; // it is a pointer pointing to a new object in heap, here we need to call the values to intilize in this constructor
    myBook2->title="C";
    myBook2->name="strau";
    
    delete myBook; //deallocation
    
    //
    
    
    
    
    
    return 0;
}
