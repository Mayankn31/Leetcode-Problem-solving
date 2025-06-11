class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        for(char x:s) mp[x]++;
        int a1=0,a2=INT_MAX;
        for(auto x:mp){
            if(x.second%2==0) a2=min(a2,x.second);
            else a1=max(a1,x.second);
        }
        return a1-a2;
    }
};