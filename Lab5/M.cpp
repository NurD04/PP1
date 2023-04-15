#include<bits/stdc++.h>
using namespace std;
int main(){

string s;
char x;
int var= 0,n;
cin>>s>>x>>n;

for (int i = 0; i < s.size(); i++)
{
    if(s[i]==x){
       var++; 
    }
}

if(var==n){
    cout<<"YES";

}
else
{
    cout<<"NO";
}
}
