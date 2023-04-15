#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,cnt = 0;cin >> n >> m;vector<int>v(n);
for (int i = 0; i < n; i++)
{
    cin>> v[i];
}
for (int i = 0; i < v.size(); i++)
{
    if (m == v[i])
    {
        cnt++;
    }
}
cout<<cnt<<endl;
}
