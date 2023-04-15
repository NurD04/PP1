#include<bits/stdc++.h>
using namespace std;
int main(){
int n,point;cin >> n;string name;
vector<string>v;
vector<int>v2;
for (int i = 0; i < n; i++)
{
    cin >> name >> point;
    v.push_back(name);
    v2.push_back(point);
}
sort(v.begin(),v.end());
sort(v2.begin(),v2.end());
for (int i = 0; i < n; i++)
{
    cout << v[i] << " " << v2[i] << endl;
}
}


