#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){

    int n;
    cin >> n;

    string num;
    int res = 0;
    int k;
    for(int j = 0; j < n; j++){
        cin >> num;
        k = 0;
        for (k; k <= num.length(); k++)
            if (num[k] == '0') {
                res++;
            }
            

  
    }

    cout << res << "\n";

    

}