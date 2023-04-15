#include<bits/stdc++.h>
using namespace std;
int main()
{

 int max = -1000000;
 int a , d , c ,b;
 cin >> a >> b >> c >> d;
 int arr[] { a , b ,c , d};
for (int i = 0; i < 4; i++)
{
  if (arr[i] > max)
  {
    max = arr[i];
  }

}
cout << max;






}