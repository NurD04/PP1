#include<bits/stdc++.h>
using namespace std;

int Even(string s)
{
    int cnt = 0;
for (int i = 0; i < s.size(); i++)
{ 
    if ( s[i] % 2 == 0){
        cnt++;
    }
    
    
}

return cnt;

}

int main()
{
string str;
cin >> str;

cout << Even(str);

}
