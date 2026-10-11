
class Solution {
public:
    vector<vector<string>> ans;
    vector<string> temp;

    bool palindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    void solve(string s, int index) {
        if (index == s.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = index; i < s.size(); i++) {
            string sub = s.substr(index, i - index + 1);

            if (palindrome(sub)) {
                temp.push_back(sub);

                solve(s, i + 1);

                temp.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        ans.clear();
        temp.clear();

        solve(s, 0);

        return ans;
    }
};
