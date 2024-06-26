#include<iostream>
#include<vector>
using namespace std;

void subseq(int idx,vector<int> &ss,int a[],int n){
    if(idx == n){
        for(auto it : ss){
            cout<<it<<" ";
        }
        if(ss.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // take
    ss.push_back(a[idx]);
    subseq(idx+1,ss,a,n);
    ss.pop_back();
    // not take
    subseq(idx+1,ss,a,n);


}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ds;
    subseq(0,ds,a,n);
}

