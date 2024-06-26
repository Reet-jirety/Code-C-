#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int ans=0;
    while(a>0){
        int lastdigit = a%10;
        ans = ans*10+lastdigit;
        a=a/10;
    }
    cout<<ans<<endl;
    
}