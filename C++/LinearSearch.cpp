#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            cout<<"key value found at index no: ";
            return i;
        }
    }
    return -1;
    
}
int main()
{
    cout<<"Enter the size of an array:"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key value of an array:"<<endl;
    int key;
    cin>>key;

    cout<<linearSearch(arr,n,key)<<endl;
    return 0;
    
}
