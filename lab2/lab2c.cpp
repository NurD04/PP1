#include<iostream>
using namespace std;

int main(){
 int year;
 cin>>year;

 if (year % 400==0){
    cout<<"Yes\n";
 }
else if (year % 100 ==0){
    cout<<"No\n";
}
else if(year%4==0)
{
    cout<<"Yes\n";
}
else{
    cout<<"No\n";
}

}