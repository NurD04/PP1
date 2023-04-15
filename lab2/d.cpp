#include <iostream>

using namespace std;
int main(){

    int minute = 0;
    int n, k;
    cin >> n >> k;
    
    if (n < k) {
        cout << 2 << '\n';
    }

    else {
        int time = 2 * n;
        int minute = time/k;
        if (time % k) {
            minute +=1;
        }

        cout << minute << '\n';
        

    }
     

}