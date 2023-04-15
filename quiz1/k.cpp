#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int station=1;
while(n>0)
{
    if(station%7!=0 && station%2==0){
      n -= 4;
    }
    else if(station%7!=0 && station%2!=0){
        n+=3;
    }
station++;

}




cout<<station;



}
