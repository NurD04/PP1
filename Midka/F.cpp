#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int i,j;
    cin >> n;
    int arr[n][n]; 
    int l,r;
    for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin >> arr[i][j];

    }
    
}
int cnt = 0;
for (int i = 0; i < n ; i++)
{
    for (int j = 0; j < n ; j++)
    {
      if (arr[i][j] == arr[j][i] and i != j )
          {
             cnt++;
          }
         

    }
          
    }
    
if ((n * n)- n == cnt)
{
    cout << "Perfect.";
    return 0;
}
cout << "Not perfect.";




}


