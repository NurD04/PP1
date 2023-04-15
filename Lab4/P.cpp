#include<bits/stdc++.h>
using namespace std;
int main(){
int r,sum = 0;
cin>>r;
int arr[100][100];
for (int i = 0; i < r; i++)
{
    
    for (int j = r-1; j >= 0; j--)
    {
    cin>>arr[i][j];   
    }
    
}

for (int i = 0; i < r; i++)
{
 
    for (int j = r - 1; j >= 0; j--)
    {
        if(i==j){
            sum += arr[i][j];
        }
    }
    
}
cout << sum;
}

