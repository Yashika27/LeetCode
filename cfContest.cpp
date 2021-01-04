#include <bits/stdc++.h>
using namespace std;

int func(vector<int>a)
{
    int n=a.size(), res=INT_MIN;
    int dp[n];
    for(int i=n-1;i>=0;i--)
    {
        if(i+a[i] >= n)
        dp[i] = a[i];
        else
        dp[i] = a[i] + dp[i+a[i]];
        
        res=max(res,dp[i]);
    }
    
    return res;
}

int main() {
    
    int n,i,t,q,input;
    cin>>t;
    
    for(q=1;q<=t;q++)
    {
    cin>>n;
    int res;
    vector<int>a;
    
    for(int i=0;i<n;i++)
    {
    cin>>input;
    a.push_back(input);
    }
    
    cout<<func(a)<<endl;
    
    a.clear();
    
}

}
