#include <bits/stdc++.h>
using namespace std;
int main() {
 string str;
 cin >> str;
 stack<int> t;
 for(int i = 0; i < str.size(); i++){
  if(t.empty()){
   t.push(str[i]-48);
   }
   else{
   int n = t.top()*10 + (str[i]-48);
   int sqr = sqrt(n);
   if(sqr*sqr==n){
    t.pop();
   }else{
    t.push(str[i]-48);
   }
  }
}
 if(t.empty()) cout <<"Stack is empty";
 else {
 while(!t.empty())
 {
  cout <<t.top();
  t.pop();
 }
}
    return 0;
}
