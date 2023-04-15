#include <iostream>

#include <algorithm>
#include <vector>


using namespace std;
int main(){
    vector<int> numbers;
    int i, num;
    cin >> i;
    for(int j = 0; j < i; j++){
        cin >> num;

        numbers .push_back(num);
    
    }

    cout << *max_element(numbers.begin(), numbers.end());
}