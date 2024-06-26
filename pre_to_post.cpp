#include<iostream>
#include<stack>
using namespace std;

string preTopost(string s){
    stack<string> st;
    string ans;
    for(int i=s.length()-1;i>=0;i--){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
            st.push(string(1, s[i]));
        }else{
            string frist = st.top();
            st.pop();
           string second = st.top();
           st.pop();
           string exp = frist+second+s[i];
           st.push(exp);
        }
    }
    return st.top();
}
int main()
{
    string pre_exp = "*-A/BC-/AKL";
    cout << "Postfix : " << preTopost(pre_exp)<<endl;
    return 0;
}