#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,y;
cin >> n;
multimap<int,int>m;
for (int i = 1; i <= n; i++)
{
    cin >> x >> y;
    m.emplace(x + y,i);
}
for ( auto now : m)
{
    cout << now.second << " ";
}
}