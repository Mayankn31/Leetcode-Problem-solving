class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        int n=nums.size();
        unordered_set<int>s;
        unordered_map<int,int>mp;
        for(int x:nums){
            int cur=x%value;
            if(cur<0) cur+=value;
            int newCur=cur;
            if(mp.count(cur)) newCur=cur+value*mp[cur];
            mp[cur]++;
            s.insert(newCur);
        }
        for(int i=0;i<n;i++){
            if(s.count(i)) continue;
            else return i;
        }
        return n;
    }
};