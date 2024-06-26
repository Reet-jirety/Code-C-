#include<iostream>
using namespace std;

int binary(int a[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    while(low<=high){
        int mid = low + (high-low)/2;
        if(a[mid]==target){
            return mid;
        }else if(a[mid]<target){
            return binary(a,mid+1,high,target);
        }
        return binary(a,low,mid-1,target);
    }
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
    cout<<binary(a,0,n,target)<<endl;;
    
    return 0;
}