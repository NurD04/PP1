#include<bits/stdc++.h>

using namespace std;
int main(){
 int a;
 cin>>a;
 int maxValue=0;
 int sum=0;
 
 long long arr[a];
 for(int i=0;i<a;i++){
     cin>>arr[i];
 }
 for(int i=0;i<a;i++){
     sum +=arr[i];
 }
 for(int i=0;i<a;i++){
     if(maxValue<arr[i]){
         maxValue=arr[i];
     }
 }
    
cout<<sum<<" "<<maxValue;


}
