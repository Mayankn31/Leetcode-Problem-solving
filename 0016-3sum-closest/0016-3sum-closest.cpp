class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res;
        int diff=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int j=i+1,k=n-1;
            while(j<k){
                int curSum=nums[i]+nums[j]+nums[k];
                int curDiff=abs(target-(curSum));
                if(curDiff<diff){
                    diff=curDiff;
                    res=curSum;
                }
                if(curSum<target) j++;
                else k--;
            }
        }
        return res;
    }
};