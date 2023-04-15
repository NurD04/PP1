#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int cnt = 0;
int n = 0;
for (int i = 0; i < s.size(); i++)
{
   n++;
    if (s[i] != s[s.size() - (i + 1)])
    {
        cnt++;
    }
}
if (cnt == n )
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}


}