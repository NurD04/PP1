#include<iostream>

using namespace std;
int main(){

int size;
cin>>size;
int arr[size];
int max=-1000000;
int x;
for (int i = 1; i <= size; i++)
{
    cin>>arr[i];
}
for (int i = 1; i <= size; i++)
{
    if (arr[i]>max)
    {
        max=arr[i];
        x = i;
    }
    
}
cout<<x<<endl;
}
