#include<iostream>
#include<vector>
using namespace std;

int sum_subseq(int idx,vector<int> &ds,int s,int sum,int a[],int n){
    
    if(idx==n){
        if(s==sum){
            
            return 1;
        
        }else{
            return 0;
        }
        
    }
    // take
    ds.push_back(a[idx]);
    s += a[idx];
    int l = sum_subseq(idx+1,ds,s,sum,a,n);

    s -= a[idx];
    ds.pop_back();

    // not take
    int r = sum_subseq(idx+1,ds,s,sum,a,n);
    return l+r;

    
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
    cout<<sum_subseq(0,ds,0,sum,a,n)<<endl;;
}