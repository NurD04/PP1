#include <bits/stdc++.h>
using namespace std;

char con(int a){
    if(a >= 10) return 'A'+a-10;
    return a + '0';
}

void ve(int num, int ka){
    if(num == 0) return;
    ve(num/ka, ka);
    cout << con(num % ka);
}

int main(){
int num, ka;
cin >> num >> ka;
ve(num, ka);
}