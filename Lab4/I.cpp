#include<bits/stdc++.h>
using namespace std;
int main(){
int r,c;
cin>>r>>c;
int array[100][100];
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cin>>array[i][j];
    }
    
}
int k;
for (int i = 0; i < r; i++)
{
    for (int  j = 0; j < c; j++)
    {   k=sqrt(array[i][j]);
        int s=pow(k,2) ;     
        if(array[i][j]==s){
        array[i][j]=k;
    }
    
}
}
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}

return 0;

}

