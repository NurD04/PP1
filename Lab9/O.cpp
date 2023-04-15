#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;cin >> n;string log1,log2,pas1,pas2;
map<string,string>mp;
for (int i = 0; i < n; i++)
{
    cin >> log1 >> pas1;
    mp.emplace(log1,pas1);
}
cin >> m;
for (int i = 0; i < m; i++)
{
    cin >> log2 >> pas2;
    if (mp[log2].empty())
    {
        cout<<"login error"<<endl;
    }
    else if (mp[log2] != pas2)
    {
        cout << "password error"<<endl;
    }
    else
    {
        cout<<"correct password"<<endl;
    }
    
}



}



































/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;string log, pas;string new_log, new_pas; 
    map<string, string> mp;

    for(int i = 0; i < n; i++){
        cin >> log >> pas;
        mp[log] = pas;
    }
    int mn; cin >> mn;
    for(int i = 0; i < mn; i++){
        cin >> new_log >> new_pas;
        if(mp[new_log].empty()) cout << "login error" << endl;
        else if(mp[new_log] != new_pas) cout << "password error" << endl;
        else cout << "correct password" << endl;
    }
}*/


