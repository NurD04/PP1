#include<bits/stdc++.h>
using namespace std;

int SUMMA(string s)
{
int digits = 0;
for (int i = 0; i < s.size(); i++)
{
    digits += s[i] - '0';
}
return digits;

}

int main()
{
    string num;
    cin >> num ;

    cout << SUMMA(num);



}