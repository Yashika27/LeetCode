class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        
        int i,j,dp[100000];
        if(nums.size()==0)
            return 0;
        
        for(i=0;i<nums.size();i++)
        dp[i]=1;
        
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                    dp[i]=max(dp[j]+1,dp[i]);
            }
        }
        
        int max=INT_MIN;
        
        for(i=0;i<nums.size();i++)
        {
            if(max<dp[i])
                max=dp[i];
        }
        
        return max;
        
    }
};

