#include<bits/stdc++.h>
using namespace std;

int main()

{
int a,b,c;
cin >> a >> b >> c;
if (c ==  1)
{
    for (int  i = a; i <= b; i++)
{
   int s = sqrt(i);
   int   r = s * s;
    if (r == i )
    {
        cout << i << " ";
    }
    
}
}

else
{
   for (int  i = b; i >= a; i--)
{
   int s = sqrt(i);
   int   r = s * s;
    if (r == i )
    {
        cout << i << " ";
    }
    
}
}




}