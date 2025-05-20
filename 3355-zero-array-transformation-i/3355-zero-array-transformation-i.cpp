class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
        vector<int>dif(n+1,0);
        for(auto& x:queries){
            dif[x[0]]++;
            dif[x[1]+1]--;
        }
        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[0]>dif[0]) return false;
                continue;
            }
            dif[i]+=dif[i-1];
            if(nums[i]>dif[i]) return false;
        }
        return true;
    }
};