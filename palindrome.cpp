#include<iostream>
using namespace std;

bool check(string a,int i,int j){
    if(i>=j){
        return true;
    }
    if(a[i]==a[j-1]){
        check(a,i+1,j-1);
    }
    else{
        return false;
    }
    return true;
}

int main(){
    int m;
    cin>>m;

    string a;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<check(a,0,m)<<endl;

}