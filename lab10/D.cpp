#include<bits/stdc++.h>
using namespace std;
int main(){
 int n, sum;
 cin >>n;
    vector<vector<int> >v;
    multimap<int,vector<int> > mp; 
  vector<int> vec;
     for (int i = 0; i < n; i++)
    {
     sum = 0;
     int x;cin >> x;
        for(int  i = 0; i < x; i++)
        {
         int m;cin >> m;
         sum += m;
         vec.push_back(m);
        }
  mp.insert({ sum, vec });
  vec.clear();
    }
  multimap<int,vector<int> > ::iterator jt;
  for(jt = mp.begin(); jt != mp.end(); ++jt)
  {
    for(int i = 0; i  < jt->second.size(); i++)
     {
         cout << jt->second[i] << " " ;
     }  
  cout << endl;
  }
}

