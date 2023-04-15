#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin >> s1 >> s2;
    int f = s1.find(s2);
    if(f != string::npos)cout << "YES";
    else cout << "NO";


    return 0;
}