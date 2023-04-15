#include<bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c,d,e;
    cin>>a;
    b=a%10;//сонгы цифр
    c=a/1000; //1 ши цифр
    d=a/100%10;//2ши цифр
    e=a/10%10;//3ши цифр
    if(c==b && d==e){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
