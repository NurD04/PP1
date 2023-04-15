#include<bits/stdc++.h>
using namespace std;

string Validate(string s)
{
  for (int i = 0; i < s.size(); i++)
  {
   if (s[i] % 2 != 0)
   {
   return "Not valid";
   }
  }
  return "Valid";
  
}


int main()
{

string str;
cin >> str;
cout << Validate(str);

}