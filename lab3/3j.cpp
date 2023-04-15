#include<bits/stdc++.h>

using namespace std;
int main()
{
int a;
long long b;
cin>>a>>b;
long long arr[a];
int c ;
for (int i = 0; i < a; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < a; i++)
{
    if(b>=arr[i]){
    c=i;
    }

 }
cout<<c ;
}
