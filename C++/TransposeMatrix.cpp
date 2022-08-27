#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Before Transpose: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i=0; i<3; i++)
    {
        for (int j=i; j<3; j++)
        {
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    cout << "\nAfter Transpose: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
