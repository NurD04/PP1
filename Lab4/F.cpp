#include <iostream>
using namespace std;
int main(){
    int n, m=0, l=0;
    cin>>n;
    int arr[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (arr[i][j]>arr[m][l]){
                m=i;
                l=j;
            }
        }
    }
    cout<<m+1<<" "<<l+1;
}