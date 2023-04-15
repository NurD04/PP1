#include <bits/stdc++.h>
using namespace std;
bool isP(vector<int> ve){
	for(int i = 0;i<ve.size()/2;i++){
		if(ve[i]!=ve[ve.size()-1 - i]){
			return false;
		}
	}
	return true;
}
int main(){
	int num;
	cin>>num;
	vector<int> ve;int x;
	for(int i = 0;i<num;i++){
		cin >> x;
		ve.push_back(x);
	}
    sort(ve.begin(),ve.end());
	do{
		if(isP(ve)){
			for(int i = 0;i<ve.size();i++){
				cout<<ve[i]<<" ";
			}
			return 0;
		}
	}while(next_permutation(ve.begin(),ve.end()));
    
	cout<<"Impossible"<<endl;

	return 0;
}
