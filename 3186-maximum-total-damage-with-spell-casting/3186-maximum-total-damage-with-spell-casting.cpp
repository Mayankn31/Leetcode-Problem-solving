class Solution {
public:
    long long solve(int idx,int n,vector<int>& nums,unordered_map<int,int>& mp,vector<long long>& dp){
        if(idx>=n) return 0;

        if(dp[idx]!=-1) return dp[idx];

        long long skip=solve(idx+1,n,nums,mp,dp);

        int j=lower_bound(nums.begin()+idx+1,nums.end(),nums[idx]+3)-nums.begin();
        long long take=(long long)nums[idx]*mp[nums[idx]] + solve(j,n,nums,mp,dp);

        return dp[idx]=max(skip,take);
    }
    long long maximumTotalDamage(vector<int>& power) {
        unordered_map<int,int> mp;
        for(int x:power){
            mp[x]++;
        }
        int n=mp.size();
        vector<int>nums;
        for(auto x:mp){
            nums.push_back(x.first);
        }

        sort(nums.begin(),nums.end());

        vector<long long> dp(n+1,-1);

        return solve(0,n,nums,mp,dp);
    }
};