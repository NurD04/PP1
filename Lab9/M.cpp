#include<bits/stdc++.h>
using namespace std;
int main(){
int n,bil;string name;cin>>n;
queue<string>q;
string s = "queue is empty";
for (int i = 0; i < n; i++)
{
    cin >> bil;
    if ( bil == 1 )
    {
        cin >> name;
        q.push(name);
    }  
    else 
    {
        q.pop();
    }
    if (q.empty()){
        cout << "queue is empty"<<endl;  
    }
    else
    {
        cout<<q.front()<<endl;
    }
    
}




}