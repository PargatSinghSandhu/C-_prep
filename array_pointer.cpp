
#include <iostream>

using namespace std;

void Incre(int *arr)
{
    cout<<*(arr+2);
}

int main()
{
    
    
    int arr[5] = {1,2,3,4,5};
    
    Incre(arr);
    

    return 0;
}
