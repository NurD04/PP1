#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c;
    cin>>n;
    string a=".";
    for (int i=0; i<n; i++){
        for (int j=n-1; j>=0; j--){
            if (j==i){
                c=i+1;
                cout<<c;
            }
            else {
                cout<<a;
            }
        }
        cout<<endl;
    }
}
