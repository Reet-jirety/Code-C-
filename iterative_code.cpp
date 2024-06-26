#include<iostream>
using namespace std;

int binary_search(int a[],int n,int target){
    int low =0;
    int high = n-1;
    while(low <= high){
    int mid = low + (high-low)/2;
    
    if(a[mid]==target){
        return mid;

    }else if(a[mid]>target){
        high = mid-1;
    }else{
        low = mid+1;
    }
    }
    return -1;
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
    cout<<binary_search(a,n,target)<<endl;;
    
    return 0;
}