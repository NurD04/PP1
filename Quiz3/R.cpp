#include<bits/stdc++.h>
using namespace std;
int main(){
int f;
vector<int>v;
string s;
char c;
cin >> s >> c;
for (int i = 0; i < s.size(); i++)
{
    if (s[i] == c)
    {
        f = i;
        v.push_back(f);
    }
    
}
for (int i = 0; i < v.size(); i++)
{
    if (v.size() == 1)
    {
        cout << v[i];
    }
    else{
    cout << v[i] << " " << v[v.size() - 1];
    break ;
    }
}



}
