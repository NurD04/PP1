#include<bits/stdc++.h>
using namespace std; 
int main()
{
  double all = 0, num , kr = 0, sum = 0, at1, at2, f, cred, h; 
  vector<pair<int, pair<int, pair <int, int> > > > v;
 cin >> num;
 double xq = 3;
 while(num--){
  cin >> at1 >> at2 >> f >> cred;
  all += cred;
  if (at1 + at2 > 29 && f > 19){
   kr = (at1 + at2 + f);
   if (kr >=95) h = 4;
   if (kr >= 90 && kr < 95) h = 11 / xq;
   if (kr >=85 && kr < 90) h = 10 / xq;
   if (kr >=80 && kr < 85) h = 3;
   if (kr >=75 && kr < 80) h = 8 / xq;
   if (kr >=70 && kr < 75) h = 7 / xq;
   if (kr >=65 && kr < 70) h = 2;
   if (kr >=60 && kr < 65) h = 5 / xq;
   if (kr >=55 && kr < 60) h = 4 / xq;
   if (kr >=50 && kr < 55) h = 1;
   if (kr < 50) h = 0; 
  sum += h * cred;
  }  
 }  
 double gpa = sum / all;
 cout << gpa;
return 0;
}