#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
vector<int>s(n);
for (int i = 0; i < n; i++)
{
    cin >> s[i];
}
int k;
cin >> k;
for (int i = 0; i < n; i++)
{
    if(i == k){
        continue;
    }
    cout << s[i] << " ";
}




}