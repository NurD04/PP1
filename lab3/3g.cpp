#include<iostream>
#include<cmath>

using namespace std;
int main(){

int size;
cin>>size;
int minValue=1000000;
int maxValue=-1000000;
long long arr[size];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
for (int i = 0 ; i < size; i++)
{
    if(maxValue<arr[i])
    {
        maxValue=arr[i];
    }
}
for (int i=0;i<size;i++)
{if(arr[i]<minValue){
    minValue=arr[i];
}
    
}
for (int i=0;i<size;i++){
    if(arr[i]==maxValue){
        arr[i]=minValue;
    }
}
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

}