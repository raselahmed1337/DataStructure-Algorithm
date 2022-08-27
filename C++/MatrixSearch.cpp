#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no of matrix row and column, row >> col: "<<endl;
    cin >>n >> m;
    cout<<"Enter the target value: "<<endl;
    int target;
    cin>> target;
    int mat[n][m];
    
    cout<<"Enter your matrix elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>mat[i][j];
        }
    }
    int r=0, c=m-1;
    bool found = false;
    while(r<n and c>=0)
    {
        if(mat[r][c]==target)
        {
            found = true;
        }
        if(mat[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }

    }
    if(found)
    {
        cout<<"Target found";
    }
    else{
        cout<<"Target doesnt exist";
    }

    return 0;
}
