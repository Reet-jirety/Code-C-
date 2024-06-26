#include<iostream>
#include<vector>
using namespace std;

bool sum_subseq(int idx,vector<int> &ds,int s,int sum,int a[],int n){
    if(idx==n){
        if(s==sum){
            for(auto it:ds){
                cout<<it<<" ";
                
            }
            cout<<endl;
            return true;
            
        }
        return false;
    }
    // take
    ds.push_back(a[idx]);
    s += a[idx];
    if(sum_subseq(idx+1,ds,s,sum,a,n)==true){
        return true;
    }

    s -= a[idx];
    ds.pop_back();

    // not take
    if(sum_subseq(idx+1,ds,s,sum,a,n)==true){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    vector<int> ds;
    cout<<endl;
    sum_subseq(0,ds,0,sum,a,n);
}