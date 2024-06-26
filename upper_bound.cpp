#include<iostream>
using namespace std;


int U_B(int a[],int n,int target){
    int l=0;
    int h = n-1;
    int ans=n;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(a[mid]>target){
            ans=mid;
            h=mid-1;
        }else{
            l = mid+1;
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
    cout<<U_B(a,n,target);
}