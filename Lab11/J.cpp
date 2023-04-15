#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,y,new_x,new_y;cin >> x >> y;
double res;cin >> n;
multimap<double,pair<int,int> >m;
for (int i = 0; i < n; i++)
{
    cin >> new_x >> new_y;
    res = sqrt(pow((new_x - x),2)+ pow((new_y - y),2));
    m.emplace(res,make_pair(new_x,new_y));
}
for (auto it : m)
{
    cout << it.second.first << " " << it.second.second << endl;
}
}