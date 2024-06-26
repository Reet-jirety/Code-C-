// time complexity -- O(n^2)

#include<iostream>
using namespace std;

void selection_sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    selection_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}