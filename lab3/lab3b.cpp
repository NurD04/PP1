#include<iostream>

using namespace std;
int main()
{

int size , cnt=0;
cin>>size;
int arr[size];

for (int i = 0; i < size; i++)
{
  cin>>arr[i];
}
for (int i = 0; i < size; i++)
{
  if (arr[i]>0){
    cnt++;
  }
}

cout<<cnt<<endl;




}