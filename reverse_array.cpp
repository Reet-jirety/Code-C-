#include<iostream>
using namespace std;

// recursive calling
void f(int a[],int i,int j){
    if(i>=j){
        return;
    }
    swap(a[i],a[j]);
    f(a,i+1,j-1);


}

// backtracking
void f1(int a[],int i,int n){
    if(i==n){
        return;
    }
    f1(a,i+1,n);
    cout<<a[i]<<" ";
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    f(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    f1(a,0,n);


}