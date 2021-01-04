class Solution {
public:
    int coinChange(vector<int>& v, int x) {
        
         vector<int> dp(x+1,1e9);
        dp[0]=0;
        for(int i=1;i<x+1;i++)
		{
            for(int j=0;j<v.size();j++)
			{
                if(i-v[j]>=0)
				dp[i]=min(dp[i],1+dp[i-v[j]]);
            }
        }
        
        return (dp[x] == 1e9 ? -1 : dp[x]);
        
    }
    
};
