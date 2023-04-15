#include<iostream>
using namespace std;
int main(){
    int n,a, sum;
    
    cin>>n;
    a=1;
    sum=0;
    for ( a; a <= n; a++)
    {
        sum += a;
    }
    cout<<sum<<endl;
}
