class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[1]) return nums[n-1];
        return nums[n];
    }
};