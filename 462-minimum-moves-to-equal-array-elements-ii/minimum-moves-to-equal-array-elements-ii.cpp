class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[i]){
                    int temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
        int m=n/2;
        int median;
        int result;
        if(n%2==0){
            result=nums[m]+nums[m-1];
            median=result/2;
        }
        else{
            median=nums[m];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(nums[i]-median);
        }
        return sum;
    }
};