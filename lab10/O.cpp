#include<bits/stdc++.h>
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
int main(){
int n;cin >> n;vector<int>v(n);
string str;
for (int i = 0; i < n; i++)
{
    cin >> v[i];
}for (int i = 0; i < v.size(); i++)
{
string reverse = bin(v[i],str);
for(int j= reverse.length() - 1;j>=0;j--){
    cout<<reverse[j];
  }
  cout << endl;
} 
}


    /*
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
  cin>>num;
  string str;
  string reverse = bin(num ,str);
  for(int i= reverse.length() - 1;i>=0;i--){
    cout<<reverse[i];
  }
  
  return 0;
}*/
