#include<bits/stdc++.h>
using namespace std;
int main(){
 int r,c;
 int n=0;
 cin>>r>>c;
 int arr[r][c];

 for (int i = 0; i < r; i++)
 {
    for (int j = 0; j < c; j++)
    {
        cin>>arr[i][j];
    }
 }
 for (int i = 0; i < r; i++)
 {
    for (int j = 0; j < c; j++)
    {
        if (arr[i][j]<0)
        {
            n++;
        }
        


    }
    
 }
 

cout<<n;
}
