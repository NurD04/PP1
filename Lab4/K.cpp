#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i,j;
int sum=0;
cin>>n>>m;
int arr[100][100];

for ( i = 0; i < n; i++)
{
    for ( j = 0; j < m; j++)
    {
       cin>>arr[i][j];
    }
    
}
for ( i = 0; i < n; i++)
{    
    
    for ( j = 0; j < m; j++)
    {
        sum += arr[i][j];
       

    }
     cout << "The sum of row number " << i + 1 << " is " << sum ;
     cout << endl;
     sum=0;
}

for ( j = 0; j < m; j++)
{
    
    for ( i = 0; i < n; i++)
    {
       
     sum += arr[i][j];
    
    }
    cout << "The sum of column number " << j + 1 << " is " << sum ;
     cout << endl;
     sum = 0;
}


}
