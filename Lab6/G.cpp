#include<bits/stdc++.h>
using namespace std;
//  
void del(string s)
{
     string new_s = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U' )
        {
            continue;         
        }
        else
        {
        cout << s[i];
        }
        
     
      
    }
    
}


int main()
{

string str;
getline(cin, str);
del(str);

}
