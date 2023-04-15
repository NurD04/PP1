#include<bits/stdc++.h>
using namespace std;

int Fibo(int n)
{
  
    if(n == 1 ){
        return 0;
    }
    else if ( n == 2)
    {
        return 1;
    }
    
  
    return Fibo(n - 1) + Fibo(n - 2);

}

int main()
{
int num;
cin >> num;

cout << Fibo(num);
}
