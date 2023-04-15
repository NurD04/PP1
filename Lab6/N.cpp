#include<bits/stdc++.h>
using namespace std;

void Transpose(int row,int col)
{
int arr[row][col];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col; j++)
    {
        cin >> arr[i][j];
    }
    
}

for (int j = 0; j < col; j++)
{
    for (int i = 0; i < row; i++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
    
}



}

int main()
{
int n,m;
cin >> n >> m;

Transpose(n,m);
}