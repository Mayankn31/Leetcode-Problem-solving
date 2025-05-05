class Solution {
public:
    int numTilings(int n) {
        if(n<3) return n;
        int M=1e9+7;
        vector<int>dp(n+1,0);
        dp[1]=1;
        dp[2]=2;
        dp[3]=5;
        for(int i=4;i<=n;i++){
            dp[i]=((2*dp[i-1])%M + dp[i-3]%M)%M;
        }
        return dp[n];
    }
};