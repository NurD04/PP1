# include <iostream>
using namespace std;
int main ()
{
    int i, j,mi,n, m;

    cin>>n>>m;
    int array[n][m];
    for (i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
    cin>>array[i][j];
        }
    }
 int min = 1000000;
for (i=0; i<n; i++)
{ 
    int sum=0;

        for(j=0; j<m; j++)
        {
            sum += array[i][j];
        }
if(min>sum){
min=sum;
mi=i+1;
}
}
cout<<mi;
}

