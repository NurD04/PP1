
#include <bits/stdc++.h> 
using namespace std; 
 
int main() 
{ 
 int a, n; cin >> a >> n; vector<int> v1(a), v2(n),las ; 
 
 for (int i = 0; i < a + n; i++) i < a ? cin >> v1[i] : cin >> v2[i - a]; 
 
 a = unique(begin(v1), end(v1)) - begin(v1); 
 n = unique(begin(v2), end(v2)) - begin(v2); 
 
 for (int i = 0; i < max(a,n); i++)  
 { 
  if(i<a) las.push_back(v1[i]); 
 
  if(i<n) las.push_back(v2[i]); 
 } 
 
 int kor = unique(begin(las), end(las)) - las.begin(); 
 
 for (int i = 0; i < kor; i++) cout << las[i] << " "; 
}
