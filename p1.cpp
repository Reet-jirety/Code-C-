#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }cout<<endl;
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";

        }cout<<endl;
    }
}

void pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<j+1<<" ";

        }cout<<endl;
    }
}

void pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";

        }cout<<endl;
    }
}
void pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<"* ";

        }cout<<endl;
    }
}
void pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<j+1<<" ";

        }cout<<endl;
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";

        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<i;j++){
            cout<<" ";

        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";

        }
        for(int j=0;j<i;j++){
            cout<<" ";

        }
        cout<<endl;
    }
}
void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int star=i;
        if(i>n){
            star=2*n-i;

        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }cout<<endl;
    }
}
void pattern11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }cout<<endl;
    }
}
void pattern12(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
           cout<<j;
        }cout<<endl;
    }
}
void pattern13(int n){
    int num=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }cout<<endl;
    }
}
void pattern14(int n){
    int num=1;
    for(int i=0;i<n;i++){

        for(char j='A';j<='A'+i;j++){
            cout<<j<<" ";
           
        }cout<<endl;
    }
}
int main(){
   int n;
   cin>>n;
//    pattern1(n);
   pattern14(n);
}