#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int salary,bank=0,month=0;
    cin>>salary;
    while(bank<=500000)
   {
    bank=bank + salary*0.3;
    salary=salary + salary*0.1;
    month++;
   }
    cout<<month;
    
}