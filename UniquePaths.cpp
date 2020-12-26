class Solution {
public:
    int uniquePaths(int m, int n) {
        
        return func(m-1,n-1);
        
    }
    
    int v[100][100];
 
    int func(int i, int j)
    {
        if(i==0 && j==0)
            return 1;
        if(i<0 || j<0)
            return 0;
        if(v[i][j])
            return v[i][j];
    
        return v[i][j] = func(i-1,j) + func(i, j-1);
        
    }
};
