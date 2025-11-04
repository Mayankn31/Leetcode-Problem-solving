class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>res(n-k+1);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(i>=k-1){
                int sum=0;
                priority_queue<pair<int,int>> pq;
                for(auto x:mp){
                    pq.push({x.second,x.first});
                }
                int f=x;
                while(!pq.empty() && f--){
                    sum+=pq.top().second*pq.top().first;
                    pq.pop();
                }
                res[i-k+1]=sum;
                mp[nums[i-k+1]]--;
                if(mp[nums[i-k+1]]==0) mp.erase(nums[i-k+1]);
            }
        }
        return res;
    }
};