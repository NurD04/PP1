#include <iostream>
#include<ctime>
using namespace std;

/*Заполнить массив уникальными случайными числами*/

int main()
{
srand(time(NULL));

const int SIZE = 10;
int arr[SIZE];

bool alreadyThere;

for (int i = 0; i < SIZE; )
{
alreadyThere = false;
int newRanomValue = rand() % 20;

for (int j = 0; j < i; j++)
{
if (arr[j]==newRanomValue)
{
alreadyThere = true;
break;
}
}

if (!alreadyThere)
{
arr[i] = newRanomValue;
i++;
}

}
int minValue = arr[0];
for (int i = 0; i< SIZE;i++)
if (arr[1]<minValue)
{
    minValue = arr[1];
    
}

cout<<"Minimum Number: " << minValue<<endl;
}
