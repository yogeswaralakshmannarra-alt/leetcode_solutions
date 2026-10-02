class Solution {
public:
    vector<string> generateParenthesis(int n) {

        vector<string> current;
        current.push_back("");

        for(int i = 0; i < 2 * n; i++) {

            vector<string> next;

            for(string s : current) {

                int open = 0;
                int close = 0;

                for(char c : s) {
                    if(c == '(')
                        open++;
                    else
                        close++;
                }
                if(open < n) {
                    next.push_back(s + "(");
                }

                if(close < open) {
                    next.push_back(s + ")");
                }
            }

            current = next;
        }

        return current;
    }
};