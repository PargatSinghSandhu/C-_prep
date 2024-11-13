#include<iostream>

using namespace std;




int main()
{
    int rows, cols;
    cout<<"Enter rows: "<<endl;
    cin>>rows;
    
    cout<<"Enter cols: "<<endl;
    cin>>cols;
    
    int **table = new int*[rows]; //the * in int*[rows], for column array, each will point to any array 
    
    for(int i= 0 ; i<rows ; i++) //this is creating the cols in each row based on the input
    {
        table[i] = new int [cols];
    }
    
    //now at the time of deletion, we can not directly delete the table because the rows and columns will still stay there,
    //so we start deallocating from the back!
    for(int i=0; i<rows;i++) // for each row i need to delete the array of columns
    {
        
        delete[] table[i]; //this will delete the array of columns 
    }
    //now the rows table, the table which the table variable is pointing to
    delete[] table;
    table = nullptr;
    
    
    return 0;
}
