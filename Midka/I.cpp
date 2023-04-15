#include<bits/stdc++.h>
using namespace std;



int main()
{
int n;
int max = -1000000;
cin >> n;
int arr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin >> arr[i][j];
    }    
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[i][j] > max){
            max = arr[i][j];
        } 
    }
    for (int i = 0; i < n; i++)
    {
        cout << max << " ";
    }
    cout << endl;
    max = -1000000;
}




}