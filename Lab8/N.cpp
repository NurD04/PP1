#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin >> n;
set<int>s;
for (int i = 0; i < n; i++)
{
    int x;
    cin >> x;
    s.insert(x);
}
for (auto now : s)
{

    if (now % 2 == 0)
    {
        continue;
    }
    cout << now << " ";
}




}
