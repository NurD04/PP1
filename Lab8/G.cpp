#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{

if (a <= 1)
    {
        return false;
    }


for (int i = 2; i < a; i++)
{
    if (a % i == 0 )
    {
        return false;
    }
    
}

return true;

}



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
int cnt = 0;
for (int i = 0; i < n; i++)
{
    if (k<=s[i])
    {
       if (isPrime(s[i]))
        cnt++;
    }
    
}

cout << cnt;
}
