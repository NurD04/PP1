#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
getline(cin,s);
for (int i = 0; i < s.size(); i++)
{
    if (s[i] == 'z')
    {
        cout  << 'a';
    }
    else if (s[i] == 'Z')
    {
        cout << 'A';
    }
    
    
    else if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' &&  s[i] <= 'Z')
    {
        s[i] += 1;
        cout <<s[i];
    }
    else
    {
        cout << s[i];
    }
    
    
    
}




}