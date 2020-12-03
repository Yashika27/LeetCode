class Solution {
public:
    
    int dp[102];
   int numDecodings(string s) {
        int i;
        if(s=="0")
            return 0;
        for(i=1;i<s.length();i++)
        {
            if(s[i]=='0' && (s[i-1]>'2' || s[i-1]<'1'))
               break;
        }
               if(i<s.length())
               return 0;
        return func(s,0);  
    }
    
    int func(string s,int i)
    {
        if(i==s.length())
            return 1;
            if(i>s.length())
            return 0;
        if(dp[i])
                return dp[i];
               
        else if(s[i]=='0')
            return 0;
        else if(s[i]=='1' || (s[i]=='2' && s[i+1]<'7'))
            return dp[i]=func(s,i+1)+func(s,i+2);
        else
            return dp[i]=func(s,i+1);
           
    }
};
