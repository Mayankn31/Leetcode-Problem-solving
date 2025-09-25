class Solution {
public:
    vector<vector<int>>dp;
    int func(vector<vector<int>>& triangle,int i,int j,int n){
        if(i>=n) return 0;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        return dp[i][j]=triangle[i][j] +min( func(triangle,i+1,j,n), func(triangle,i+1,j+1,n));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        dp.resize(n,vector<int>(n,INT_MAX));
        return func(triangle,0,0,n);
    }
};