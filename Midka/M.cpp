#include<bits/stdc++.h>
using namespace std;


int main()
{

long int a,b;
cin >> a >> b;
int n;

for ( int i = -60; i < 60; i++)
{
    if (b == a * pow(2,i))
{
    cout << "YES" << " " << i;
    return 0;
}
}
cout << "NO";

/*if (b == a * pow(2,n))
{
    cout << "YES" << " " << n;
}

else
{
    cout << "NO";
}*/




}