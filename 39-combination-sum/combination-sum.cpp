class Solution {
public:
    vector<vector<int>>ans;
    vector<int>temp;
    void solve(vector<int>& candidates, int target,int a){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int i=a;i<candidates.size();i++){
            if(candidates[i]>target){
                continue;
            }
            temp.push_back(candidates[i]);
            solve(candidates,target-candidates[i],i);
            temp.pop_back(); 
        }  
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(candidates,target,0);
        return ans;
    }
};