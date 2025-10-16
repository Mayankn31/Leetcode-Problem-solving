class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int,int>mp;
        for(int &x:nums){
            int cur=x%value;
            if(cur<0) cur+=value;
            mp[cur]++;
        }
        int MEX=0;
        while(mp[MEX%value]>0){
            mp[MEX%value]--;
            MEX++;
        }
        return MEX;
    }
};