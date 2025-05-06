class Solution {
public:
    void f(vector<int>&nums,int i){
        if(i>=nums.size()) return;
        int cur=nums[nums[i]];
        f(nums,i+1);
        nums[i]=cur;
    }
    vector<int> buildArray(vector<int>& nums) {
        f(nums,0);
        return nums;
    }
};