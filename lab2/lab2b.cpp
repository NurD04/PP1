#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

if (n % 2 != 0){
    cout<<"Super\n";
}else if (n % 2 ==0 and(n > 2 and n < 5) or n > 20) {
    cout<<"Not Super \n";
}
else if(n % 2 == 0 and n > 6 and n < 20){
    cout<<"Super \n";
}
}
