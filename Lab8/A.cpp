#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;
set<int>s;
int i;
for ( i = 0; i < n; i++)
{
    int x;

    cin >> x ;
    s.insert(x);

}

for (auto now : s)
{
    cout << now << " ";
}

}
