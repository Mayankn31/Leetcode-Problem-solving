class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int maxFre = 0;
        unordered_map<int, int> mp;
        for (auto x : nums) {
            mp[x]++;
            maxFre = max(maxFre, mp[x]);
        }
        int res = 0;
        for (int x : nums)
            if (mp[x] == maxFre)
                res++;
        return res;
    }
};