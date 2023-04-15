#include<bits/stdc++.h>
using namespace std;
int main(){
int r,max=-100,x,y;
cin>>r;
int arr[100][100];
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < r; j++)
    {
        cin>>arr[i][j];
    }
    
}

for (int i = 0; i < r; i++)
{
    
    for (int j = 0; j < r; j++)
    {
        if(i==j && arr[i][j] > max){
            max = arr[i][j];
            x = i;
            y = j;
        }
        
    }
    
}

 cout << "Maximum element is: " << max << " with coordinates: " << x + 1 << ";" << y + 1;
 



}