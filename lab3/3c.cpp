#include<iostream>
using namespace std;

int main(){

int size,maxValue=-1000000;
cin>>size;
int arr[size];

for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < size; i++)
{
    if (arr[i]>maxValue)
    {
        maxValue=arr[i];
    }
    
}

cout<<maxValue;

}
