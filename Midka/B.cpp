#include<iostream>

using namespace std;

int main(){
    int he ,wi,cnt = 0;
    cin >> he >> wi;
    int a[he][wi];
    for(int i = 0; i < he;i++){
        for(int j = 0;j < wi;j++){
            a[i][j] = 0;
        }
    }
    int k;
    cin >> k;
    int sq[k][4]; 
    for(int j = 0; j < k;j++){
        for(int p = 0; p < 4;p++ ){
            cin >> sq[j][p];
        }
    }
    // ai

    int x1 ,y1,x2 , y2;
    for(int j = 0; j < k;j++){
        x1 = sq[j][0];
        y1 = sq[j][1];
        x2 = sq[j][2];
        y2 = sq[j][3];
        for(int i = x1; i < x2;i++){
            for(int j = y1;j < y2;j++ ){
                a[i][j] = 1;
            }
        }
    }
    

    // for(int i = 0; i < n;i++){
    //     for(int j = 0;j < m;j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    for(int i = 0; i < he;i++){
        for(int j = 0;j < wi;j++){
            if(a[i][j] == 0){
                cnt++;
            } 
        }
    }

    cout << cnt;





    // cout << cnt;
    return 0;
}