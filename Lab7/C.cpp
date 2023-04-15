#include<bits/stdc++.h>
using namespace std;

void binary(int n,int cnt,int a[])
{

for (int i = 0; i < n; i++)
{
    if (a[i] == cnt)
    { 
        cout << "Yes" << endl;
        return ; 

     }  
}

cout << "No";


}

int main()
{
int num;
int co;
cin >> num;
int arr[num];
for (int i = 0; i < num; i++)
{
    cin >> arr[i];
}

cin >> co;


binary(num,co,arr);


} 
