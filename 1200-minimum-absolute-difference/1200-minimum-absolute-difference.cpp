class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        int mad=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<mad) mad=nums[i]-nums[i-1];
        }
        vector<vector<int>> res;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==mad) res.push_back({nums[i-1],nums[i]});
        }
        return res;
    }
};