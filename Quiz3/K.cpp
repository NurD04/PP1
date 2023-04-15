#include <iostream>
#include <string>
using namespace std;

int con(string n)
{
    string s = n;
    int value = 0;
    int ba = 1;
    int si = s.size();
    for (int i = si - 1; i >= 0; i--) {
        if (s[i] == '1')
            value += ba;
        ba = ba * 2;
    }
    return value;
}
int main()
{
    string n;
    cin >> n;
    cout << con(n) << endl;
}