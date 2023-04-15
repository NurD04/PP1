#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x, cnt = 0; cin >> n;map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        m[x]++;
    }
    for ( auto now : m)
    {
        if (now.second > 1)
        {
            cnt++;
        }
    }
cout<<cnt;
}