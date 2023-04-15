#include<bits/stdc++.h>
using namespace std;

int main()
{

int num;
cin >> num;
int arr[num];
 int even = 0;
int odd = 0;
int cnt_even = 0;
int cnt_odd = 0;
for (int i = 0; i < num; i++)
{
    cin >> arr[i];
}
for (int i = 0; i < num; i++)
{  
    if (num == 0){
        cout << "Left hand magic power: 0" << endl << "Right hand magic power: 0";
        return 0;
    }
}

for (int i = 0; i < num; i++)
{
    if (arr[i] % 2 == 0)
    {
        even++;      

        cnt_even += arr[i];
    }
    
}
cout << "Left hand magic power: " << cnt_even * even << endl;

for (int i = 0; i < num; i++)
{
    if (arr[i] % 2 != 0)
    {
        odd++;      

        cnt_odd += arr[i];
    }
    
}

cout << "Right hand magic power: " << cnt_odd * odd << endl;
}
