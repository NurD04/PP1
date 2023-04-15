#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
long int max1=-1000000000 ;
long  int max2=-1000000000 ;

cin>>n;
int arr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>arr[i][j];
    }
    
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (max1<arr[i][j])
        {
            max1=arr[i][j];
    
        }
        
        
    }
    
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (arr[i][j]!=max1 and max2<arr[i][j])
        {
            max2=arr[i][j];
        }
        
    }
    
}

if( max2 == -1000000000 )
{
cout<<"0";
}
else{
    cout<<max2;
}



}