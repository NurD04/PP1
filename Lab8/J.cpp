#include<bits/stdc++.h>
using namespace std;
int main(){

int n,max,min;
cin >> n;
vector<int>s(n);
for (int i = 0; i < n; i++)
{
    cin >> s[i];
}
sort(s.begin(),s.end());
for (int i = 0; i < n; i++)
{
    if (i == n - 1)
    {
        max = s[i];
    }
    if (i == 0)
    {
        min = s[i];
    }
    
}

cout << max - min << endl;
}