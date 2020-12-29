class Solution {
public:
    
    
    bool func(int t, vector<int>& nums) {
        
        int i,j;
        int n=nums.size();
        int dp[n+1][t+1];
        
        for(i=1;i<t+1;i++)
        {
            dp[0][i]=false;
        }
        
        for(i=0;i<n+1;i++)
        {
            dp[i][0]=true;
        }
        
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<t+1;j++)
            {
              if(nums[i-1]<=j){
                        dp[i][j] = (dp[i-1][j-nums[i-1]] || dp[i-1][j]);
                    } else {
                        dp[i][j] = dp[i-1][j];
                    }
          
            }
        }
        
        return dp[n][t];
        
        
    }
    
    bool canPartition(vector<int>& nums) {
        
        int r=0;
        for(int i=0;i<nums.size();i++)
            r+=nums[i];
        
        if(r%2!=0)
            return false;
       return func(r/2,nums);
        
    }
    
};
