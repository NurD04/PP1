
#include <bits/stdc++.h>
using namespace std;
int main(){
    int summa = 0;
    string str;
    cin >> str;
    for ( int i=0; i<str.size(); i++ ) 
    {
        summa += int(str[i]);
    }
    if ( summa>300 ) {
        cout << "It is tasty!";
    }
    else { 
        cout << "Oh, no!";
    return 0;
    }
}







