class Solution {
public:
    
    int func(int s, int e, vector<int>& n)
    {
        if((s-e) == 0)
            return n[0];
        if((s-e) ==1)
            return max(n[0], n[1]);
        
        int prevone=0, prevtwo=0,max1=INT_MIN;
        
        for(int i=s;i<e;i++)
        {
            max1 = max(prevone, prevtwo + n[i]);
            prevtwo = prevone;
            prevone = max1;
        }
        
        return max1;
    }
    int rob(vector<int>& n) {
        
       if(n.size() == 0)
           return n[0]; 
       if(n.size() == 1)
           return n[0];
        if(n.size() == 2)
             return max(n[0], n[1]);
        
        return max(func(0, n.size()-1, n), func(1, n.size(), n));
        
        
    }
};
