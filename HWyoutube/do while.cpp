#include<iostream>
using namespace std;

int main(){
    int sum=0;

    int rangeBegin,rangeEnd;
    cout<<"Start diapozon?"<<endl;
    cin>>rangeBegin;
    cout<<"End diapozon"<<endl;
    cin>>rangeEnd;

    do
    {    if(rangeBegin%2!=0){
   sum += rangeBegin;

    }

        rangeBegin++;
    } while (rangeBegin<rangeEnd);
    cout<<"Sum all odd number in diapozon = "<<sum<<endl;
    


}