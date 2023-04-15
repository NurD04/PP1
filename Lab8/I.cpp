#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k;
cin >> n;
vector<int>s(n);
for (int i = 0; i < n; i++)
{
    cin >> s[i];
}
cin >> k;

for (int i = 0; i < n; i++)
{
    if (s[i] == k)
    {
        cout << "Yes";
        return 0;

    }
    
}

cout << "No";

}