#include<iostream>
using namespace std;
// Вложенные циклы ДЗ

int main(){

int high,width;
cout<<"Enter high?\n";
cin>>high;
cout<<"Enter width?\n";
cin>>width;


for (int j = 0; j < high; j++)
{
    cout<<"*";
    for ( int i= 0; i < width; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    
}






}