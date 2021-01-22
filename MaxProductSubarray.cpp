class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        if(nums.size()==0)
            return 0;
        
       int i,res=nums[0],maxPrev=nums[0],minPrev=nums[0];
        int maxCurr,minCurr;
        
       for(i=1;i<nums.size();i++)
       {
           maxCurr=max(nums[i], max(nums[i]* maxPrev, nums[i]* minPrev));
           minCurr=min(nums[i], min(nums[i]* maxPrev, nums[i]* minPrev));
           
           res=max(res,maxCurr);
           
           maxPrev=maxCurr;
           minPrev=minCurr;
           
       }
        
        return res;
            
        
    }
    
};
