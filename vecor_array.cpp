#include<iostream>
#include<vector>
using namespace std;

    void printVector(vector<int>&vec)
    {
         cout<<"Enter the array"<<endl;
         
         for(int i=0 ; i<vec.size() ;i++)
         {
             cin>>vec[i];
         }
         
          cout<<"Display the array"<<endl;
         
         
         for(auto i : vec)
         {
             cout<<i;
         }
    }

int main()
{
    int size;
    cout<<"Enter the size of an array";
    cin>>size;
    
    
    vector<int> vec(size);
    
    printVector(vec);
    
    
    
    return 0;
    
}
