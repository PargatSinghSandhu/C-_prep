#include<iostream>

using namespace std;




int main()
{
    int rows, cols;
    cout<<"Enter rows: "<<endl;
    cin>>rows;
    
    cout<<"Enter cols: "<<endl;
    cin>>cols;
    
    int **table = new int*[rows];
    
    for(int i=0 ; i<rows; i++)
    {
        table[i]=new int [cols];
    }
    
    //intput 
    
    for(int i=0 ; i<rows;i++)
    {
        for(int j=0 ;j<cols;j++)
        {
            cin>>table[i][j];
        }
    }
    
    //display
    for(int i=0 ; i<rows;i++)
    {
        for(int j=0 ;j<cols;j++)
        {
           cout<<table[i][j];
        }
    }
    
    
    //deallocate
    for(int i=0 ; i<rows;i++)
    {
        delete[] table[i];
    }
    delete [] table;
    table = nullptr;
    
    
    
    
    return 0;
}
