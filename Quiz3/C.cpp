#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main(){
int n,res;cin >> n;
vector<int>v(n);
vector<int>g;
for (int i = 0; i < n; i++)
{
    cin >> v[i];
}
sort(v.begin(),v.end());
for (int i = 0; i < v.size() - 1; i++)
{
    for (int j = i + 1; j < v.size(); j++)
    {
        res = gcd(v[i],v[j]);
        g.push_back(res);
    }   
}
sort(g.begin(),g.end());
for (int i = 0; i < g.size(); i++)
{
    cout << g[g.size() - 1];
    break;
}




}
