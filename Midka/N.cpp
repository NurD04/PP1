#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    int num;

    cin>>num;

    string let[num];
    for (int i=0;i<num;i++){
        cin>>let[i];
    }

    for (int i=0;i<num/2;i++){

        string s = let[i];
      
        int ar = stoi(s);
        
        string yar = let[num-i-1];

        reverse(yar.begin(), yar.end());


        int yarint = stoi(yar);

        if(ar==yarint) {
            continue;
        } else {
            cout<<"NO";
            return 0;
        }

    }
    
    cout<<"YES";

    


}