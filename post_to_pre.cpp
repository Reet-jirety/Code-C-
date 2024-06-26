#include<iostream>
#include<stack>
using namespace std;

string preTopost(string s){
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
           string exp = s[i]+second+frist;
           st.push(exp);
        }
    }
    return st.top();
}
int main()
{
     string post_exp = "ABC/-AK/L-*";
    cout << "Postfix : " << preTopost(post_exp)<<endl;
    return 0;
}