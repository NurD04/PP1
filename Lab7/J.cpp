#include<bits/stdc++.h>
using namespace std;

int heat( string s )
{
int sum = 0;
int a = 0;


for (int i = 0; i < s.size(); i++)
{
    a = (s[i] - '0') / 2;
    
    sum += a ;
}

return sum; 

}

int main()
{

string str;
cin >> str;

cout << heat(str);

}
