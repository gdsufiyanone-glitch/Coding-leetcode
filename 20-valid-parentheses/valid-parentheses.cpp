#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int len = s.size();
        stack <char> st;
        for(int i = 0 ; i < len; i++){
              if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.emplace(s[i]);
            }
            if(s[i] == ')'){
                if(!st.empty() && st.top() == '('){
                    st.pop();
                }else{
                    return false;
                }
            }else if(s[i] == ']'){
                if(!st.empty() && st.top() == '['){
                    st.pop();
                }else{
                    return false;
                }
            }else if (s[i] == '}'){
                if(!st.empty() && st.top() == '{'){
                    st.pop();
                }else{
                    return false;
                }
            }
          
        }
        if(st.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};