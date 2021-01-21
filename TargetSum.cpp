class Solution {
public:
    
    int func(int i, int S, vector<int>nums, vector<vector<int>>dp)
    {
        if(i==nums.size() && S==0)
            return 1;
        if(i==nums.size())
            return 0;
        if(dp[S + 1000][i] != INT_MIN)
            return dp[S + 1000][i];
        return dp[S + 1000][i] = func(i+1,S+nums[i],nums,dp) + func(i+1,S-nums[i],nums,dp);
        
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        
        vector<vector<int>>dp(2001, vector<int>(nums.size(), INT_MIN));
        if(S==0 && nums.size() == 0)
            return 1;
        if(nums.size() == 0)
            return 0;
        return func(0, S, nums,dp);
        
    }
};
