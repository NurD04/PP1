#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string bin(int num, string str){
    if(num==0)
      return str;
    if(num%2==0){
      str += '0';
    }
    else if(num%2==1){
      str += '1';
    }
    num = num / 2;
    return bin(num, str);
}

int main()
{
  int num;
  cin >> num;
  string str;
  string reverse = bin(num ,str);
  for(int i = reverse.length() - 1;i>=0;i--){
    cout << reverse[i];
  }
  
  return 0;
}