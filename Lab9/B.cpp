#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
vector<int>v(n),vec,vec2;
for (int i = 0; i < n; i++)
{
    cin >> v[i];
}
for (int i = 0; i < n; i++)
{
   if (v[i] % 2 == 0)
   {
      vec.push_back(v[i]);
   }
   else
   {
    vec2.push_back(v[i]);
   }
   
}
sort(vec.begin(),vec.end());
reverse(vec.begin(),vec.end());
for (auto now : vec)
{
    cout << now << " ";
}
sort(vec2.begin(),vec2.end());
for (auto now : vec2)
{
    cout << now << " ";
}


}
