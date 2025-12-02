class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        int mod=1e9+7;
        unordered_map<int,int>mp;
        for(auto &x:points){
            mp[x[1]]++;
        }
        int res=0,sum=0;
        for(auto x:mp){
            int cur=x.second;
            long long hl=(long long)cur*(cur-1)/2;
            res=(res+sum*hl)%mod;
            sum+=hl;
        }
        return res;
    }
};