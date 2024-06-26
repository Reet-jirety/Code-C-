#include<iostream>
#include<math.h>
#include<limits.h>

using namespace std;

int main(){
    int x;
    cin>>x;
    int a = x;
    int ans=0;
    while(a>0){
        int lastdigit = a%10;
        ans = ans+pow(count,lastdigit);
        a=a/10;
    }
    if(x==ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    
}