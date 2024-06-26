#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int count=0;
    while(a>0){
        int lastdigit = a%10;
        cout<<lastdigit<<endl;
        count++;


        a=a/10;
    }
    cout<<endl<<count<<endl;
}