#include<iostream>
#include<cmath>

using namespace std;
int main(){

int n,l,r;
cin>>n>>l>>r;
long long arr[n];
long long sum=0;
for(int i=1;i<=n;i++)
{
    cin>>arr[i];
}

// l = 6
// i = 6
// i = 7 

// i = 8


for(int i=l;i<=r;i++)
{
    sum += arr[i];
}

cout<<sum<<endl;
}