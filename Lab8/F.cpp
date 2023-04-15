#include<bits/stdc++.h>
using namespace std;

int main(){


int n;
cin >> n;
vector<int>s(n + 1);
for (int i = 0; i < n; i++)
{
    cin >> s[i];
}
int k,b;
cin >> k >> b;

s.insert(s.begin() + k,b);
for (int i = 0; i < n + 1; i++)
{
    cout << s[i] << " ";
}
                                                                                                                                                                                                                                                                                                                                               


}