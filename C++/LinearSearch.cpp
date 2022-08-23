#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int searchValue)
{
    for (int i=0; i<size; i++)
        if(arr[i]==searchValue)
            return i;
    return -1;
    
}
int main()
{
    int arr[] = {1,2,3,4,5,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int searchValue = 2;

    int result = linearSearch(arr, size, searchValue);
    if(result==-1)
    {
        cout<<"Element is not present in array";
    } 
    else
    {
        cout<<"Elements is present is array: "<<result;
    }
    
    return 0;
}
