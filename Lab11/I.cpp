#include<bits/stdc++.h>
using namespace std;
int main(){
    // палиндроммга новый идея
    string s; cin >> s;
    vector<char>v1;
     vector<char>v2;
    for (int i = 0; i < s.size(); i++)
    {
        v1.push_back(s[i]);
    }
    
    sort(v1.begin(),v1.end());
  for (int i = 0; i < s.size(); i++)
  {
    if (v1[i] != v1[i + 1])
    {
         v2.push_back(v1[i]);
    }
    else
    {
       i++;
    }
  }
  if (v2.size() > 1)
  {
    cout << "JOJO" << endl;
  }
  else
  {
    cout << "ZA WARUDO TOKI WO TOMARE" << endl;
    
  }
  
}