#include<iostream>
using namespace std;

int L_B(int a[],int n,int target){
    int low=0;
    int high = n-1;
    int ans = n;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]>=target){
            ans = mid;
            high = mid-1;
        }else{
            low = mid +1;
        }

    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    cout<<L_B(a,n,target);
}