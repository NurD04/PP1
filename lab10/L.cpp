#include<bits/stdc++.h>
using namespace std;
int main(){
int n;;
cin >> n;
vector<int>v;
for (int i = 1; i <= n; i++)
{
    v.push_back(i); 
}
for (int i = 0; i < v.size(); i++)
{
    for (int j = 0; j < v[i]; j++)
    {
        cout << v[i] << " ";
    }
    
}

}
