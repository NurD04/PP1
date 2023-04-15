#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; 
    cin >> s;
    set<int> cr;
    for(int i = 0; i < s.size(); i++){
        cr.insert(tolower(s[i]));
    }
    cout << cr.size() << endl;
    for(set<int> :: iterator it = cr.begin(); it != cr.end(); it ++){
        cout << (char)*it << " ";
    }

}