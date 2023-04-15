#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,double>p1,pair<string,double>p2){
    if (p1.second == p2.second)
    {
        return p1.first > p2.first;
    }
    
return p1.second > p2.second;
}
int main(){
map<string,double>mp;
vector<pair <string,double > > v;string vec;
int n,po,all = 0;cin >> n;string na;
for (int i = 0; i < n; i++)
{
    cin >> na >> po;
    all += po;
    mp[na] += po;
}
for (auto it : mp)
{
   vec = it.first;
   double ves;
   ves = (it.second * 100) / all;;
   v.push_back(make_pair(vec,ves));
}
sort(v.begin(),v.end(),cmp);
for (int i = 0;i < v.size();i++ )
{
    cout << v[i].first << " " << v[i].second << "%" << endl;
}

}

