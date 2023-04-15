#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt = 0;string s;map<string,int>mp;cin>>n;
    for (int i = 0; i < n; i++)
    {
          cin >> s;
         if (!mp[s])
         {
            mp[s] = 0;
         }
         else
         {
            mp[s]++;
         }
         
    }
    for ( auto it : mp)
    {
        if (it.second == 3)
        {
            cnt++;
        }
        
    }
    cout<<cnt;
    
}

