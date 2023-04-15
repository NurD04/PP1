#include <iostream>
#include <cmath>
#include <vector>
#include <sstream>
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> res;
    int i = 0;

    for (i; pow(2, i) <= n; i++) {
        res.push_back(pow(2, i));
    }

    stringstream ss;
    for (auto it = res.begin(); it != res.end(); it++)    {
        if (it != res.begin()) {
            ss << " ";
        }
        ss << *it;
    }

    cout << ss.str() << '\n';


}
