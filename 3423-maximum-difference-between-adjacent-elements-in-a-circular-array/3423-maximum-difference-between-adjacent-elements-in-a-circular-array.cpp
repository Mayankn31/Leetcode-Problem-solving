class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int res=INT_MIN;
        int n=nums.size();
        for(int i=1;i<n;i++){
            res=max(res,abs(nums[i]-nums[i-1]));
        }
        res=max(res,abs(nums[0]-nums[n-1]));
        return res;
    }
};