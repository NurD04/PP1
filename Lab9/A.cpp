#include <bits/stdc++.h>
using namespace std;
int main(){
int num,n,p;
map<int,int>mp;
for (int i = 0; i < num; i++)
{
    cin >> n >> p;
    mp[n] = p;
}
for ( auto it : mp)
{
    cout << it.first << " " << it.second << endl;
}



}