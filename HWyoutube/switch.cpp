#include<iostream>
using namespace std;

int main(){

int a, b, selection;
cin>>a>>b;



cout<<"What operation should be perfomed?"<<endl<<"1. sum"<<endl<<"2. substraction"<<endl<<"3. mult"<<endl<<"4. Division"<<endl;
cin>>selection;
switch(selection)
{
     
case 1:
cout<<"Result of sum:"<<a+b<<endl;
break;
case 2:
cout<<"Result of substraction:"<<a-b<<endl;
break;
case 3:
cout<<"Result of mult:"<<a*b<<endl;
break;
case 4:
cout<<"Result of division:"<<a/b<<endl;
break;
default:
cout<< "Error.I dont know this operation"<<endl;
break;
}


}

