#include<bits/stdc++.h>
using namespace std;

bool lucky(string s)
{
    int sum = 0;
    int div;
    for (int  i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
        
    }
    if (sum % (s[s.size() - 1] -'0') == 0) return true;
    else return false;
    
    


}
int main()
{
string num;
cin >> num;
cout << (lucky(num) ? "Yes" : "No");

}
