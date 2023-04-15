#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> evens, odds;
    int i, num;
    cin >> i;
    for(int j = 0; j < i; j++){
        cin >> num;

        if (num%2==0) {
            evens.push_back(num);
        } else {
            odds.push_back(num);
        }
    }
    int odd_count = odds.size();
    int even_count = evens.size();
    cout << even_count << " " << odd_count << '\n';
}
