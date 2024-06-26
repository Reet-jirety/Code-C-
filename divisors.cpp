#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int main(){
    int a;
    cin>>a;
     vector<int> ls;
    for(int i=1;i<=sqrt(a);i++){
            if(a%i==0){
            ls.push_back(i);
            if(a/i!=i){
                ls.push_back(a/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls){
        cout<<it<<" ";
    }
}