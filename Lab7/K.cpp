#include<bits/stdc++.h>
using namespace std;

int dig(string s)
{
    int max = -1000000;

    for (int i = 0; i < s.size(); i++)
    {
        if( (s[i] - '0') > max  )
        {
            max = s[i] - '0';
        }
    }
    
  return max;

}
int main()
{

string num;
cin >> num;
cout << dig(num);

}