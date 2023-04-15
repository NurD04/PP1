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
//sa
