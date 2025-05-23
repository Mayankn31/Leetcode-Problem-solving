class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum=0;
        int ml=INT_MAX;
        int cnt=0;
        for(int x:nums){
            if((x^k)>x){
                sum+=(x^k);
                cnt++;
            }
            else sum+=x;
            ml=min(ml,abs(x-(x^k)));
        }
        return cnt%2==0?sum:sum-ml;
    }
};