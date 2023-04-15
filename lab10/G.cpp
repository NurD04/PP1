#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    multimap<string, int> mp;

    for(int i = 0; i < n; i++){
        int po1, po2, cnt = 0; 
        string na1, na2;
        cin >> na1 >> po1 >> na2 >> po2;
        string key = na1 + " and " + na2;
        for(auto i : mp){
            if(i.first == key and i.second == po1 + po2){ cnt++;
        }
        }
        if(cnt == 0){
             mp.emplace(key, po1 + po2);
    }
    }
    for(auto i : mp) {
        cout << i.first << " " << i.second << endl;
}
}

//sa