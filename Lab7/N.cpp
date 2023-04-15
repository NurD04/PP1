#include<bits/stdc++.h>
using namespace std;

void cheat(int n,int me)
{

int cnt = 0;
int arr[n];
for ( int i = 0; i < n; i++)
{
    cin >> arr[i];
}


for (int i = 0; i < n; i++)
{
 for (int j = 0; j < n; j++)
 {
   if (abs(arr[j] - arr[i]) <= me && arr[i]!=arr[j])
   {
      cout << "cheater";
      return ;
   }
   
 }
  
}

cout << "no";
/*if (cnt == 0)
{
    cout << "no";
    return ;
}
else{
cout << "cheater";
}*/

}
int main()
{

int num,m;
cin >> num >> m;


cheat(num,m);


}