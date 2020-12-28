class Solution {
public:
    int countSubstrings(string s) {
        
        int i,l,j,t;
        int count=0;
        l=s.length();
        if(l==0)
            return 0;
        for(i=0;i<l;i++)
        {
            j=i;
            t=i;
            
            while(t>=0 && j<l && s[j]==s[t])
            {
                count++;
                t--;
                j++;
            }
            
            j=i+1;
            t=i;
            
            while(t>=0 && j<l && s[j]==s[t])
            {
                count++;
                t--;
                j++;
            }
            
        }
        
        return count;
        
        
    }
};
