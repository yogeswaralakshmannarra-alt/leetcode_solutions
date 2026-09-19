class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();

        vector<int> best(n, INT_MAX);

        int i = 0;
        int sum = 0;
        int answer = INT_MAX;
        int minLength = INT_MAX;

        for(int j = 0; j < n; j++) {

            sum += arr[j];

            while(sum > target) {
                sum -= arr[i];
                i++;
            }

            if(j > 0) {
                best[j] = best[j - 1];
            }

            if(sum == target) {

                int length = j - i + 1;

                if(i > 0 && best[i - 1] != INT_MAX) {
                    answer = min(answer, length + best[i - 1]);
                }

                best[j] = min(best[j], length);
            }
        }

        if(answer == INT_MAX)
            return -1;

        return answer;
    }
};