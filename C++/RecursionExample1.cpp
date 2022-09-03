#include<bits/stdc++.h>
using namespace std;

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int preSum = Sum(n-1);
    return n+preSum;
}
int main()
{
    cout<<"Enter the number :";
    int n; cin>>n;
    cout<<"Sum of 0 to "<< n <<" is "<<Sum(n);
return 0;
}
