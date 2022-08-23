#include <bits/stdc++.h>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout<< "After swap: " << x <<" "<< y <<endl;
}
int main()
{
    int x, y;
    cout<<"Enter first number: ";
    cin>> x;
    cout<<"Enter second number: ";
    cin>> y;
    cout<< "Before swap: " <<x <<" "<< y<<endl;

    swap(x,y);

    return 0;
    
}
