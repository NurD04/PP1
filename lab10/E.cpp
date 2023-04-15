#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,double>mp;
int num; cin >> num;string city;double people,per;
long long all = 0;
for (int i = 0; i < num; i++)
{ 
    int x;
    cin >> x;
      for (int j = 0; j < x; j++)
      {
        cin >> city >> people;
        all += people;
        mp[city] += people;
      }
}
for ( auto it : mp )
{
    per = (it.second * 100 ) / all;
    cout << it.first << " " << per << endl; 
}
}
