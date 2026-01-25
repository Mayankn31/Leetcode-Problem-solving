class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int res=INT_MAX;
        for(int i=0;i<=n-k;i++){
            res=min(res,nums[n-i-1]-nums[n-i-k]);
        }
        return res;
    }
};