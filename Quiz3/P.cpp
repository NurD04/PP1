#include<bits/stdc++.h>
using namespace std;

void strt(string s){
    if(s.size() == 1){
    	for(int i = 0;i<1;i++){
    		if(s[i] == '1'){
    			cout << "true";
			}
			else{
				cout << "false";
			}
		}
	}
    else{
    	for(int i = 0;i< s.size();i++){
    		cout <<s[i];
		}
	}

}

int main()
{
string str;
cin >> str;
strt(str);

}






