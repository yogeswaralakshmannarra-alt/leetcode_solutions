class Solution {
public:
    vector<string> ans;

    bool solve(vector<string>& dp, int i, int j, int m, int n) {

        if(i == m - 1 && j == n - 1) {
            ans = dp;
            return true;
        }

        if(j + 1 < n) {
            dp[i][j + 1] = '.';

            if(solve(dp, i, j + 1, m, n))
                return true;

            dp[i][j + 1] = '#';
        }

        if(i + 1 < m) {
            dp[i + 1][j] = '.';

            if(solve(dp, i + 1, j, m, n))
                return true;

            dp[i + 1][j] = '#';
        }

        return false;
    }

    vector<string> createGrid(int m, int n) {

        vector<string> dp(m, string(n, '#'));

        dp[0][0] = '.';

        solve(dp, 0, 0, m, n);

        return ans;
    }
};