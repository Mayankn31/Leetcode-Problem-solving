class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int res=0;
        int l=0,r=0;
        for(int &x:nums) r+=x;
        for(int i=0;i<nums.size()-1;i++){
            l+=nums[i];
            r-=nums[i];
            if((l-r)%2==0) res++;
        }
        return res;
    }
};