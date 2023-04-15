#include<bits/stdc++.h>
using namespace std;

string sum(string str)
{
      int cnt = 0;

    for (int i = 0; i < str.size(); i++)
    {
            cnt += str[i] - '0';
                  
    }

}

int main()
{

string s;
cin >>  s;
cout << sum(s);

}
