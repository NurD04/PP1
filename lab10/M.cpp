/*#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;cin >> n >> m;
vector<int>v1(n),v2(m),v3;
for (int i = 0; i < n; i++)
{
    cin >> v1[i];
}
for (int i = 0; i < m; i++)
{
    cin >> v2[i];
}
unique(v1.begin(),v1.end());
unique(v2.begin(),v2.end());
for (int i = 0; i < (v1.size() + v2.size()) / 2 ; i++)
{
    v3.push_back(v1[i]);
    v3.push_back(v2[i]);
}
unique(v3.begin(),v3.end());

for (int i = 0; i < v3.size() - 1; i++)
{
    cout << v3[i]<<" ";
}

}*/
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