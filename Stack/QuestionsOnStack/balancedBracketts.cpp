#include<bits/stdc++.h>
using namespace std;

//* time complexity = o(n) 
//* space complexity = o(n) 
bool isbalanced(string s)
{
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '[' || ch=='{')
            st.push(ch);
        else{
            if(ch == ')'&& !st.empty() && st.top() == '('){
                st.pop();
            }
            else if(ch == ']'&& !st.empty() && st.top() == '['){
                st.pop();
            }
            else if(ch == '}'&& !st.empty() && st.top() == '{'){
                st.pop();
            }
            else
            return false;
        }
    }
    return st.empty();
}

int main()
{
    string s = "(){{{[])}}}";
    cout<<isbalanced(s);
}