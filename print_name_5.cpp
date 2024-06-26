#include<iostream>
using namespace std;

void f(int i,int n){
    
    if(i==n){
        return;
    }
    cout<<"reet"<<endl;
    i++;
    f(i,n);
}

int main(){
    f(0,5);
}