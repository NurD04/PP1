#include <iostream>
#include <stack>
using namespace std;

int gMA(int h[], int m){ 
    stack<int> s; 
    int area = 0; 
    int t;
    int areat;
    int i = 0; 
    while (i < m) {
        if (s.empty() || h[s.top()] <= h[i]) s.push(i++); 
        else { 
            t = s.top(); 
            s.pop();
            areat = h[t] * (s.empty() ? i :  
                                   i - s.top() - 1); 
            if (area < areat) area = areat; 
        } 
    }  
    while (s.empty() == false){ 
    t = s.top(); 
    s.pop(); 
    areat = h[t] * (s.empty() ? i :  
                                i - s.top() - 1); 
    if (area < areat) area = areat; 
    }
    return area; 
} 


int main() 
{ 
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];
    cout << gMA(h, n);
} 