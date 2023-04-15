#include<bits/stdc++.h>
using namespace std;
int main(){

int m,x;
cin>>m;
int a[m];
int b[m];
for (int i = 0; i < m; i++)
{
    cin>>a[i];
}

for (int i = 0; i < m; i++)
{
    cin>>b[i];
}

for (int i = 0; i < m; i++)
{
    x = abs(a[i] - b[i]);
    cout<<x<<" ";
}

}

