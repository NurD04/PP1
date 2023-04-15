#include <bits/stdc++.h>
using namespace std;
int main ()
{
string s;
getline (cin, s);
int cnt = 0;int max = 0;int el = 0;
for(int i = 1; i!= s.size() ; i++)
{
if(s[i - 1] == s[i])
{
    cnt++;
}
else
{
cnt =0;
}
if (max < cnt)
{
el = i;
max = cnt;
}
}
cout << s[el] <<" "<<max + 1;
}
