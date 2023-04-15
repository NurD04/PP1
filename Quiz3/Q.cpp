#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
string str[n];
for (int i = 0; i < n; i++)
{
   cin >> str[i];
}
string s2 = "@gmail.com";
for (int i = 0; i < n; i++)
{
  int cnt = str[i].find(s2);
   if(cnt != string::npos) {
            str[i].erase(str[i].end()-10,str[i].end());
            cout << str[i] << endl;
        }
}
}
