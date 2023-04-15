#include<bits/stdc++.h>
using namespace std;



int main(){

int n,m,ogr;
cin >> n >> m ;
int arr[n][m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin >> arr[i][j];
    }
    
}
cin >> ogr;
int cnt = 0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(arr[i][j] > ogr){
           cnt++;
        }
    }
    
}
if (cnt == 0)
{
    cout << "No penalty for today.";
    return 0;
}
cout << "Penalty!";




}


