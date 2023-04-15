#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar;
    vector<int> ve;
    for(int i=0;i<n;i++){
        cin>>ar;
        ve.push_back(ar);
    }
    vector<int>::iterator it;

    for(size_t i=0;i<ve.size();i++){
        for(size_t j=0;j<ve.size();j++){
            if(ve[i]==ve[j] && i!=j){
                ve.erase(ve.begin()+j);
                j--;
            }
        }
    }

    do{

        for(int i=0;i<ve.size();i++){
            cout<<ve[i]<<" ";
        }       

        cout<<endl;
    }while(next_permutation(ve.begin(),ve.end()));
    return 0;
}
