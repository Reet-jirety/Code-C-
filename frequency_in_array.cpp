#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[a[i]] += 1;
    }
    int q ;
    cin>>q;
    while(q--){
    int num;
    cin>>num;
    cout<<hash[num]<<endl;
    }
}