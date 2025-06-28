class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq,ansq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        int n=k;
        while(k--){
            int a=pq.top().first;
            int b=pq.top().second;
            pq.pop();
            ansq.push({b,a});
        }
        vector<int>res(n);
        for(int i=n-1;i>=0;i--){
            res[i]=ansq.top().second;
            ansq.pop();
        }
        return res;
    }
};