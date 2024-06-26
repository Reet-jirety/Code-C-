#include<iostream>
using namespace std;

void f(int i,int n){
    if(i==n+1){
        return;
    }
    cout<<i<<endl;
    f(i+1,n);
}

void rev(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    rev(n-1);
}

int main(){
   f(1,10);
   rev(10);
}