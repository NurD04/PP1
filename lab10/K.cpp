#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
 
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main(){
int num,cnt = 0;cin >> num;int arr[num];
for (int i = 0; i < num; i++)
{
    cin >> arr[i];
}
for (int i = 0; i < num; i++)
{
    if (isPrime(abs(arr[i])))
    {
        cnt++;
    }
    
}
cout << cnt;
}