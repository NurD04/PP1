#include<bits/stdc++.h>
using namespace std;
int main(){
int n;long long res = 1;
cin >> n;
for (long long i = 0; i <= n; i++)
{
     if (i == 0)
        {
            cout << 1 << " ";
        
        }
    else {
        for(long long j = 1;j <= i;j++)
       {
            res = res * i;   
       }
       cout << res << " ";
      }
      res = 1;
}
}
