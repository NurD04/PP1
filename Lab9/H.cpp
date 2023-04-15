#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin >> n;string s;map<string,int>m;
for (int i = 1; i <= n ; i++)
{
    cin >> s;
    m.emplace(s,i);
}
for ( auto now : m)
{
    cout << now.first << " " <<now.second<<endl;
}



}
