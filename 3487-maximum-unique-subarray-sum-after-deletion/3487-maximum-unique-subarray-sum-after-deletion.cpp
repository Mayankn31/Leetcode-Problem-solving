class Solution {
public:
    int maxSum(vector<int>& nums) {
        int res=0,maxi=INT_MIN;
        unordered_set<int>s;
        for(int x:nums){
            if(s.find(x)==s.end() && x>0){
                res+=x;
                s.insert(x);
            }
            maxi=max(maxi,x);
        }
        if(maxi!=INT_MIN && res==0) return maxi;
        return res;
    }
};