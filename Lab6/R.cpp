#include<bits/stdc++.h>
using namespace std;
char ch ( char s)
{
	
	if ( islower(s)){
		 return toupper(s);
	}
	return s;
	
}


int main()
{
	char str;
	cin >> str;
	cout << ch( str ) << endl;
	
	
	
}