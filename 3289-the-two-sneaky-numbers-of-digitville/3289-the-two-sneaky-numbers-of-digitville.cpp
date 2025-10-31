class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>res;
        unordered_set<int>s;
        for(int x:nums){
            if(s.count(x)) res.push_back(x);
            s.insert(x);
        }
        return res;
    }
};