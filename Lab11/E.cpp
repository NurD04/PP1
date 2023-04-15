#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
     cin>>a[i];
    } 
    string m = "";
    bool k = true;
    int c = 0;
    for(int i=0;i<a[0].size();i++){
        for(int j=1;j < n;j++){
            for(int t = 0;t < a[j].size();t++){
                if(a[0][i]==a[j][t]) c++;
            }
            if(c==0) k=false;
            c=0;
        }
        if(k) m=m+char(a[0][i]);
        k=true;
    }
    if(m.size()==0){
        cout<<"NO COMMON CHARACTERS";
    } else{
    for(int i=0;i<m.size();i++){
        for(int j=i+1;j<m.size();j++){
            if(m[i]==m[j]) m.erase(j);
        }
    }
        sort(m.begin(),m.end());
        for(int i=0; i<m.size();i++){
            cout<<char(m[i])<<" ";
        }
    }
}

