#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin >> n;
vector<int>v1(n);
vector<int>v2(n);
for (int i = 0; i < n; i++)
{
    cin >> v1[i];
    v2.push_back(v1[i]);
}
reverse(v2.begin(),v2.end());
for (int i = 0; i < n; i++)
{
    if (v1[i] == v2[i])
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "Instead of " << v1[i] << " here was " << v2[i] << endl;
    }
    
}




}