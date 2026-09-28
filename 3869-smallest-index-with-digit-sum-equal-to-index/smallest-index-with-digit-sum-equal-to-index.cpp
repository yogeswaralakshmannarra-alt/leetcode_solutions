class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int min = n,result = n;
        for(int i=0;i<n;i++) {
            int sum = 0,t = nums[i];
            while(t != 0) {
                sum = sum + t % 10;
                t = t / 10;
            }
            if(i == sum) {
                result = i;
            }
            if(result < min) {
                min = result;
            }
        }
        if(min == n) {
            return -1;
        }
        return min;
    }
};