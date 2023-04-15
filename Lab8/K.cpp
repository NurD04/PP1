#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k,sum = 0;
cin >> n;
vector<int>s(n);
for (int i = 0; i < n; i++)
{
    cin >> s[i];
}
cin >> k;
sort(s.begin(),s.end());
for (int i = n - 1; i > n - 1 - k; i--)
{
    sum += s[i];
}

cout << sum << endl;
}