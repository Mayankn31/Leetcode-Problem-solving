class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int res=1;
        int n=nums.size();
        int sum=nums[0]+nums[1];
        for(int i=2;i<n-1;i++){
            if(nums[i]+nums[i+1]==sum){
                res++;
                i++;
            }
            else break;
        }
        return res;
    }
};