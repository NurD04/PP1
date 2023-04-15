#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int cnt = 1, check = 0;
    bool ok  = true;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1]){
            cnt ++;
        }else{
            if(check == 0){
                check = cnt;
                cnt = 1;
            }else{
                if(check == cnt){
                    cnt = 1;
                }else {
                    ok = false;
                    break;
                }    
            }
        }
    }
    if(ok == true)cout << "YES";
    else cout << "NO"; 

    return 0;
}