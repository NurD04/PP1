#include<bits/stdc++.h>
using namespace std;
int main(){
    
    long int a,c=0,d=1;
    cin>>a;
    for( ; ; ){
    int e;
    e=a%10;
    c=c+e;
    d=d*e;
    a=a/10;
    if (a<1) {break;}
}
    cout<<d+c;
    
    
    
    
}
    
    
    