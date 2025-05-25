class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int res=0;
        bool mid=false;
        unordered_map<string,int>mp;
        for(auto x:words){
            string cur=x;
            swap(cur[0],cur[1]);
            if(mp.find(cur)!=mp.end()){
                res+=4;
                mp[cur]--;
                if(mp[cur]==0) mp.erase(cur);
            }
            else mp[x]++;
        }
        for(auto x:mp){
            string cur=x.first;
            if(cur[0]==cur[1]) mid=true;
        }
        if(mid) res+=2;
        return res;
    }
};