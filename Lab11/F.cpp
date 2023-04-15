#include<bits/stdc++.h>
using namespace std;
int main(){
double a,b,max;
int k;
cin >> a >> b >> k;
int last[100];
int j = 1;
if (a >= b){max = a;}
else{ max = b;}
for (int i = 1; i <= max; i++)
{
    if ( b / i == round(b / i) && a / i == round(a / i))
    {
        last[j] = i;
        j++;
    }  
}
cout << last[j - k];
}

