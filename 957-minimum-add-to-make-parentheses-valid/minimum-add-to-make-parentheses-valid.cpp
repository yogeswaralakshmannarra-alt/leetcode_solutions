class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int count=0;
        // st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(0);
            }
            if(s[i]==')'){
                if(!st.empty()){
                    // st.top()=st.top()+count;
                    st.pop();
                }
                else{
                    count++;
                }
            }
        }
        return st.size()+count;
    }
};
