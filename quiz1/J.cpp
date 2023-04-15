#include<bits/stdc++.h>

using namespace std;

int main(){
int a,b,c,costa,costb,costc,tg;
cin>>a>>b>>c>>costa>>costb>>costc>>tg;
if((a*costa+b*costb+c*costc)<=tg)
{
    cout<<"Yes";

}
else{
    cout<<"No";
}


}