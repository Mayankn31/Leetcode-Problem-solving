class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,-1);
        for(int i=0;i<n;i++){
            int num=0;
            while(num<=nums[i]){
                if((num|num+1)==nums[i]){
                    res[i]=num;
                    break;
                }
                num++;
            }
        }
        return res;
    }
};