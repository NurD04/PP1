#include<bits/stdc++.h>
using namespace std;
int main(){
int u = 0,k = 0;
string s;
getline(cin,s);
for (int i = 0; i < s.size(); i++)
{
    if(s[i] >= 'A' and s[i] <= 'Z'){
        u++;
    }
    else if(s[i] >= 'a' and s[i] <= 'z'){
        k++;
    }
}
cout << k << " " << u;



}