class Solution {
public:
    int rob(vector<int>& n) {
        
        if(n.size()==0)
            return 0;
        if(n.size()==1)
            return n[0];
        if(n.size()==2)
            return max(n[0], n[1]);
        
        int prevone=0, prevtwo=0,max1=INT_MIN;
        
        for(int i=0;i<n.size();i++)
        {
            max1 = max(prevone, prevtwo + n[i]);
            prevtwo = prevone;
            prevone = max1;
        }
        
        return max1;
        
    }
};
