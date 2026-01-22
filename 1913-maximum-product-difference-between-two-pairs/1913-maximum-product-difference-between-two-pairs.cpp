class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int maxProd=1;
        int n=nums.size();
        int minProd=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(i==j) continue;
                maxProd=max(maxProd,nums[i]*nums[j]);
                minProd=min(minProd,nums[i]*nums[j]);
            }
        }
        return maxProd-minProd;
    }
};