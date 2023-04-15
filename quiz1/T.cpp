#include <bits/stdc++.h>

using namespace std;
int main(){

      int n, i,  m;
      cin >> n;
    
      int arr[n];
      for( int i =0; i < n; i++){    
      
      cin >> arr[i];
       
      }
      for( int i =0; i < n; i++){
          int sum=0;
      	while( arr[i] > 0){
      		
		  
      	m = arr[i] % 10;
      	sum +=m;
      	arr[i] = arr[i] / 10;
      	}
      	if( sum % 2 == 0){
      		cout << "Sum of digits is even!" << endl ;
      	
		  }
		  else {
		  	cout << "Sum of digits is odd!" << endl;
		
		  
	}
	  }
     return 0;
}