#include<bits/stdc++.h>
using  namespace std;
int main()
{
int n;
cin>>n;
int arr[n][n];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i==0 and j==0){
            cout<<0<<" ";
        }
        if(i==0 and j!=0){
        cout<<j*1<<" ";
        }
        if(i!=0 and j==0){
            cout<<i*1<<" ";
        }
        if(i!=0 and j!=0){
            cout<<i*j<<" ";
        }
        
    }
    cout<<endl;
    
}
}