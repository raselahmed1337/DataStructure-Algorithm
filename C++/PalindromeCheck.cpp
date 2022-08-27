#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != arr[n-1-i])
        {
            check = 0;
            break;
        }
    }
    if(check == true)
    {
        cout<<"the word is a palindrome";
    }
    else
    {
        cout<<"The word is not palindrome";
    }
    return 0;
    
}
