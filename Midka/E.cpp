#include<bits/stdc++.h>
using namespace std;

int main()
{

long int n;
int d,sum = 0;
cin >> n;

while (n > 9)
{
    d = n % 10;
    sum += d;
    n /= 10;
    
    
}
if( sum % 10 == n )
{
   cout << "YES";
}
else
{
    cout << "NO";
}


}