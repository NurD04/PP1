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
int a,b;
cin >> a >> b;

for (int i = 0; i < n; i++)
{
    if (i >= a && i <= b)
    {
       continue;
    }

    cout << s[i] << " ";
}







}