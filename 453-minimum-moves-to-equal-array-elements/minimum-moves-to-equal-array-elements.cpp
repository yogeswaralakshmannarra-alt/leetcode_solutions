class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minVal = nums[0];
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < minVal) {
                minVal = nums[i];
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            count += nums[i] - minVal;
        }

        return count;
    }
};