#include<bits/stdc++.h>
using namespace std;
int main(){

long int n,max=0;
cin>>n;
int arr[n][n];

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>arr[i][j];
    }
}
for(int i=0;i<n;i++)
{
    
  for(int j=0;j<n;j++){
      if(arr[i][j]>max){
          max=arr[i][j];
      }     
  }  
    
}
cout<<max;
}

