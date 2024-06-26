// time complexity -- O(N^2)  ---- worst case
// it can be optimised;
// best case time complexity -- O(N)
#include<iostream>
using namespace std;

void bubble_sort(int a[],int n){
    for(int k=0;k<n;k++){
        int swap=0;
    for(int i=0;i<n-1-k;i++){
        int j=i+1;
        if(a[i]>a[j]){
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
            swap=1;
        }
    }
    if(swap==0){
        break;
    }
    }
}

int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   bubble_sort(a,n);
   for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
   }cout<<endl;
}