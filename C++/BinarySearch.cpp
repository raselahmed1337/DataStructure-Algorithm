#include <bits/stdc++.h>
using namespace std;

int BinarySearch( int arr[], int n, int key)
{
    int start = 0;
    int end = n;
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}


int main()
{
    cout<<"enter the size of an array";
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int key;
    cout<<"Enter the key/search value: "<<endl;
    cin>>key;
    cout<<BinarySearch(arr,n,key);
    return 0;
}
