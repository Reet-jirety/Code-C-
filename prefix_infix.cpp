#include<iostream>
#include<stack>
using namespace std;

string pretoinf(string s){
    stack<string> st;
    int len = s.length();
    for(int i=len-1;i>=0;i--){
        string ch="";
        ch += s[i];
        if(isalpha(ch[0])){
            st.push(ch);
        }else{
            string left = st.top();
            st.pop();
            string right = st.top();
            st.pop();
            st.push("("+left+ch+right+")");
        }
    }
    return st.top();

}
int main() {
  string exp = "(p+q)*(m-n)";
  cout << "prefix expression: " << exp << endl;
  string ans = pretoinf(exp);
  cout<<"infix expression: "<< ans <<endl;
  return 0;
}