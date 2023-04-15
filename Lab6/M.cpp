#include<bits/stdc++.h>
using namespace std;


void Array(int a , int arr[])
{
  
for (int i = a - 1; i >= 0; i--)
{
 cout << arr[i] << " ";
}
}
int main()
{
  int num;
  cin >> num;
  int arr[num];
  for (int i = 0; i < num; i++)
  {
    cin >> arr[i];
  }
  Array(num,arr);


}
