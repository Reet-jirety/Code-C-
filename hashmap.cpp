#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[a[i]] += 1;
    }
    
    // iterating in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }


    // int q ;
    // cin>>q;
    // while(q--){
    // int num;
    // cin>>num;
    // cout<<mpp[num]<<endl;
    // }
}