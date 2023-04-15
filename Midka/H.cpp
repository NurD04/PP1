#include<bits/stdc++.h>
using namespace std;



int main()
{
int n,cnt = 0;
cin >> n;
int arr[n];
int max = -100000;
int maximum = -1000000;
for (int i = 0; i < n; i++)
{
    cin >> arr[i];
}

for (int i = 0; i < n; i++)
{
    if (arr[i] > max)
    {
        max = arr[i];
    }
    
}

     for (int i = 0; i < n; i++)
{
    if (arr[i] == max)
    {
        cnt++;
    }
    
    else if (maximum < arr[i] &&  max != arr[i]   )
    {
        maximum = arr[i];
        
    }
       
         
}
    if (cnt != 1)
    {
        cout << max * max;
        return 0;
    }
    
    cout << maximum * max;
    
    

}