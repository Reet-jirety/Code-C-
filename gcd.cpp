#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    // int max=0;
    
        // for(int i=1;i<=min(a,b);i++){
        //     if(a%i==0 && b%i==0){
        //         if(i>max){
        //             max=i;
        //         }
        //     }
        // }
        // cout<<max<<endl;
        for(int i=min(a,b);i>=0;i--){
            if(a%i==0 && b%i==0){
                cout<<i<<endl;
                break;
            }
        }
   
    
}