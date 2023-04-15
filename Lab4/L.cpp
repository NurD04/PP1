#include<bits/stdc++.h>
using namespace std;
int main(){
 int n, m,x,y,sum = 0;
long int min = 1000000; 
 cin >> n >> m;
 int arr[n][m];
 for (int i = 0; i < n; i++)
 {
    for (int j = 0; j < m; j++)
    {
        cin >> arr[i][j];
    }
    
 }
 cout << "coordinates of min elements: " << endl;
for (int j = 0; j < m; j++)
{  
     for(int i  = 0; i < n; i++)
    {    
       

        if (arr[i][j] < min){
            min = arr[i][j];
            x = i;
            y = j;
        }
        
    }
         sum += min;    
         cout << x + 1 << ";" << y + 1 << endl;
         min = 1000000;

}

cout<<endl;
cout << "Their sum: " << endl;
cout<<sum;



}