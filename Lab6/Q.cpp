#include<bits/stdc++.h>
using namespace std;

double percent( double a, double b)
{
	return b*100/a;
}

int main()
{
	double m,n;
	cin >> m >> n;
	cout <<  percent(m,n)<<endl;
	
}