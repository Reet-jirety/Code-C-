#include<iostream>
#include<stack>
using namespace std;

string getInfix(string s){
    stack<string> st;
    string ans;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            st.push(string(1, s[i]));
        }else{
            string frist = st.top();
            st.pop();
           string second = st.top();
           st.pop();
           string exp = "(" + second + s[i] + frist + ")";
           st.push(exp);
        }
    }
    return st.top();
}
int main()
{
   string exp = "ab*c+";
    cout << getInfix(exp);
    return 0;
}
