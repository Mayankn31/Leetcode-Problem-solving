class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res=0;
        int i=0,j=0;
        int n=fruits.size();
        unordered_map<int,int>mp;
        while(i<n){
            mp[fruits[i]]++;
            while(mp.size()>2){
                mp[fruits[j]]--;
                if(mp[fruits[j]]==0) mp.erase(fruits[j]);
                j++;
            }
            res=max(res,i-j+1);
            i++;
        }
        return res;
    }
};