class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        vector<int>costs;
        int minEle=INT_MAX;
        unordered_map<int,int>mp;
        for(int &x:basket1){
            mp[x]++;
            minEle=min(minEle,x);
        }
        for(int &x:basket2){
            mp[x]--;
            minEle=min(minEle,x);
        }
        for(auto x:mp){
            int cost=x.first;
            int cnt=abs(x.second);

            if(cnt%2!=0) return -1;

            for(int i=0;i<cnt/2;i++){
                costs.push_back(cost);
            }
        }

        sort(costs.begin(),costs.end());
        long long res=0;
        for(int i=0;i<costs.size()/2;i++){
            res+=min(costs[i],2*minEle);
        }
        return res;
    }
};