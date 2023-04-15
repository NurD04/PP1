#include <bits/stdc++.h>
using namespace std;
void desi ( )
{
int n, m; cin >> n >> m;
int arr[n][m];
bool last = false;
for(int i = 0; i < n;i++)
{
 for(int j = 0; j < m;j++){ 
    cin >> arr[i][j];
 }
}
for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
        if(arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] == 4) {
            last = true;
        }
        else if(arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1] == 0) {
            last = true;
        }
    }
}
if(last) {
    cout << "NO";
}
else {
    cout << "YES";
}
}
int main(){
    desi();
}