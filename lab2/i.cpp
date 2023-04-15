#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    string num;
    int res = 0;
    for(int j = 0; j < n; j++){
        cin >> num;
        
        if (num[num.length()-1] == '7') {
            res++;
        }
    }

    cout << res << "\n";
}
