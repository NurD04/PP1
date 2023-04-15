#include<bits/stdc++.h>
using namespace std;



int main()
{

int num;
cin >> num;
int a[num];
int b[num];
for (int i = 0; i < num; i++)
{
    cin >> a[i];
}

for (int i = 0; i < num; i++)
{
    cin >> b[i];
}

int qu;
cin >> qu;
int cnt = 0;
for (int i = 0; i < num; i++)
{
    if ( qu >= a[i] && qu <= b[i] )
    {
       cnt++;
    }
}

cout << cnt;


    
}