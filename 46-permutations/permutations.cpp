class Solution {
public:

    void solve(vector<int>& nums, int index,
               vector<vector<int>>& answer) {

        if(index == nums.size()) {
            answer.push_back(nums);
            return;
        }

        for(int i = index; i < nums.size(); i++) {

            swap(nums[index], nums[i]);

            solve(nums, index + 1, answer);

            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> answer;

        solve(nums, 0, answer);

        return answer;
    }
};