#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
for (int i = 0; i < s.size(); i++)
{
    if (s[i] == 0) 
    {
        cout<<s[i]<<"";
    }
    else if (s[i]==s[i+1] && s[i]=='1')
    {
        i++;
    }
    else
    {
        cout<<s[i];
    }
    
}

}
