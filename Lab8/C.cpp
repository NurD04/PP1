#include<bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin >> n;
vector<int>s(n);
for (int i = 0; i < n; i++)
{
    cin >> s[i];

}
int a,b;
cin >> a >> b;
int c = b;
for (int i = a; i <= (a+b) / 2; i++)
{
    swap(s[i],s[c]);
    c--;
}

for (int i = 0; i < n; i++)
{
    cout << s[i] << " ";
    }





}