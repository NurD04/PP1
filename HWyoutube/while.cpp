#include<iostream>
using namespace std;

int main(){
int a;
char b;
int c;
int index=0;

cout<<"How many symvol?"<<endl;
cin>>a;

cout<<"What symvol?"<<endl;
cin>>b;

cout<<"Which line do you choose?:"<<endl<<"1-vertical"<<endl<<"2-horyzont"<<endl;
cin>>c;



while(index<a){
    if (c!=1 and c!=2)
{
	cout<<"Error.False choose"<<endl;
	
}
	if (c==1){
		cout<<b<<endl;
	}
	else if (c==2)
    {
		cout<<b;
	}
	
	index++;
     	
}

}



