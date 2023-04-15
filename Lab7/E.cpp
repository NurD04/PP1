#include<bits/stdc++.h>
using namespace std;

void divider(int n)
{
int koef;
for (int i = 0; i < 64; i++)
{
    koef = 2 * i;
   if(n == pow( 2, i ))
{
    cout << "Yes";
    return;
}
} 

cout << "No";

}

int main()
{
 
int num;
cin >> num;

divider(num);

}
