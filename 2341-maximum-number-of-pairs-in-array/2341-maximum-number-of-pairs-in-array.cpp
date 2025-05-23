class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int a=0,b=0;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            int cur=x.second;
            a+=cur/2;
            b+=cur%2;
        }
        return {a,b};
    }
};