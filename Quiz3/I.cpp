#include<bits/stdc++.h>
using namespace std;
int main(){
string s1,s2;
char c;
cin >> s1 >> s2 >> c;
for (int i = 0; i < s1.size(); i++)
{

     for (int j = 0; j < s2.size(); j++)
     {
        if (s2[j] == s1[i])
        {
            s1[i] = c;
            
        }
        
     }
       cout << s1[i];


}





}