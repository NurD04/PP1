#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;string dor;int seria;map<string,int>m;
for (int i = 0; i < n; i++)
{
    cin >> dor >> seria;
    m[dor] += seria;
}
for ( auto now : m)
{
    cout<<now.first<<" "<<now.second<<endl;
}



}