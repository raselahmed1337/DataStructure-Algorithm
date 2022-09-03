#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevFactorial = factorial(n-1);
    return n*prevFactorial;
}
int main()
{
    int n;
    cout<<"Enter the factorial number: ";
    cin>>n;

    cout<<"The result is: "<<factorial(n);
    return 0;
}
