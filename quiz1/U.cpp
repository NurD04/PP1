#include<bits/stdc++.h>
using namespace std;
int main(){
double day,x,y;
day=1;
cin>>x>>y;
while (x < y)
{
    
    x=x+x*0.1;
    day++;
}

cout<<day;




}