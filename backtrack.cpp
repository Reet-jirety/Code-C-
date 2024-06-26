#include<iostream>
using namespace std;

void f(int n){
    if(n==0){
        return;
    }
    f(n-1);
    cout<<n<<endl;
}

void rev(int i,int n){
    if(i==n+1){
        return;
    }
    rev(i+1,n);
    cout<<i<<endl;
}

int main(){
    //  f(10);
     rev(1,10);
}