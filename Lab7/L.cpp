#include<bits/stdc++.h>
using namespace std;

void Pal( string s )
{


string s1 = s;
reverse(s.begin() , s.end());
 if(s1==s){
    cout<<"Yes";
 }
else{
    cout<<"No";
}
}


int main()
{
string str;
cin >> str;

Pal(str);
}
