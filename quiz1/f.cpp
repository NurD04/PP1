#include <bits/stdc++.h>

using namespace std;

int main()
{ 
     long int x1,y1,x2,y2,a,b;
     cin>>x1>>y1>>x2>>y2>>a>>b;
     
     if(x1<=a and a<=x2 && y2<=b and b<=y1 || x1<=a and a<=y1   &&    y2<=b and b<=x2 )
     {
         cout<<"yes";
         
     }
     else{
         
         cout<<"no";
     }
     
     
}

