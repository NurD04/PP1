#include <bits/stdc++.h>
using namespace std;
double GetPriceQualityRatio(int price, int quality) {
    return (quality * 1.) / price;
}
int main() {
    int n;cin >> n;string s;int p, q;string best_phone;double pri;double pri2;
    for (int i = 0; i < n; ++i) {
        cin >> s >> p >> q;
        double pri = GetPriceQualityRatio(p, q);
        if (i == 0 || pri > pri2) {
            pri2 = pri;
            best_phone = s;
        }
    }
    cout << best_phone << endl;
    return 0;
}