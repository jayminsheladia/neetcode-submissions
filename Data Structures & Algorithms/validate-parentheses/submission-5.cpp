class Solution {
public:
    bool isValid(string s) {
        int n = s.size(), i = 0;
        stack<int> st;
        while(i < n){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                if(st.top() == '(' && s[i] == ')' || st.top() == '{' && s[i] == '}' || st.top() == '[' && s[i] == ']'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            i++;
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};
