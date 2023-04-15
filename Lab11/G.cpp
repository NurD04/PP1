#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int>mp1;
map<string,int>mp2;
int n,d;cin >> n;string na;
for (int i = 0; i < n; i++)
{
    cin >> na >> d;
    if (mp1[na] != d)
    {
        mp1[na] = d;
        mp2[na]++;
    }
    else
    {
        continue;
    }
}
for ( auto now : mp2)
{
    if (now.second >= 3)
    {
        cout << now.first << " "<< "Dias krasava" << endl;
    }
    else
    {
        cout << now.first << " " << "Ars lox"<<endl;
    }
    
}
}






























/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n,cnt = 1;;cin >> n;int day,last;string name;
map<string,int>mp;
map<string,int>res;
for (int i = 0; i < n; i++)
{
    cin >> name >> day;
    if (mp[name] != day)
    {
        mp[name] = day;
        res[name]++;
    }
    else
    {
        continue;
    }
}
for ( auto it : res)
{
    if (it.second >= 3)
    {
        cout << it.first << " " << "+1" << endl;
    }
    else
    {
        cout << it.first << " " << "NO BONUS" << endl;
    }   
}
}*/
