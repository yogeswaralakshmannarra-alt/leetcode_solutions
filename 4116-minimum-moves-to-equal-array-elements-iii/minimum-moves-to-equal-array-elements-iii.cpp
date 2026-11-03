class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int max=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>max){
                max=nums[i];
            }
        }
        for(int i=0;i<n;i++){
            sum=sum+(max-nums[i]);
        }
        return sum;
    }
};