class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(int i = 0; i < s.size(); i++) {

            if(s[i] == '(') {
                st.push(0);
            }

            else {
                int count = st.top();
                st.pop();

                if(count == 0) {
                    count = 1;
                }
                else {
                    count = count * 2;
                }

                st.top() += count;
            }
        }

        return st.top();
    }
};