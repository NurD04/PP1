#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = (int)s.size();
    for(int i = 0; i <= n; i++){
        string t;
        for(int j = 0; j < i; j++){
            t += s[j];             
        }
       
        t += s[max(n-1-i , 0)];
        for(int j = i; j < n; j++)t += s[j];
        string tt = t;
        reverse(tt.begin(), tt.end());
        if(t == tt){
            cout << "YES";
            return 0;
        }    
    }
    cout << "NO";
    
}
