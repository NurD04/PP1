#include <iostream>

using namespace std;

 
int main() {
    int n;
    cin>>n;

    for (int i=1; i<=n;i++) {
        
        for (int a=1; a<=n-i; a++) {
            cout << ".";
        }
        
        for (int b=1; b<=1+2*(i-1); b++) {
            cout << "*";
        }
        
        for (int a=1; a<=n-i; a++) {
            cout << ".";
        }

        cout << "\n";

    }
}