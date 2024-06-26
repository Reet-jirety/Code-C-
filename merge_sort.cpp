#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

void merge_sort(int a[],int mid,int l,int r){
    
    int n1 = mid+1-l;
    int n2 = r-mid;
   
    int a1[n1];
    int a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=a[l+i];
    }
    
    for(int i=0;i<n2;i++){
        a2[i]=a[mid+1+i];
    }
     int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            a[k]=a1[i];
            i++;
        }else{
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=a1[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=a2[j];
        j++;
        k++;
    }

}
void merge(int a[],int l,int r){
   int mid = (l+r)/2;
   merge(a,l,mid);
   merge(a,mid+1,r);
   merge_sort(a,mid,l,r);

}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    merge(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}