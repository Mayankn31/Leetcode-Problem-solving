class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int st=0,ed=n-1;
        while(st<n-1 && nums[st]<=nums[st+1]) st++;
        while(ed>0 && nums[ed]>=nums[ed-1]) ed--;

        if(st==n-1) return 0;

        int wMax=INT_MIN;
        int wMin=INT_MAX;

        for(int i=st;i<=ed;i++){
            wMax=max(wMax,nums[i]);
            wMin=min(wMin,nums[i]);
        }

        while(st>0 && nums[st-1]>wMin) st--;
        while(ed<n-1 && nums[ed+1]<wMax) ed++;

        return ed-st+1;
    }
};