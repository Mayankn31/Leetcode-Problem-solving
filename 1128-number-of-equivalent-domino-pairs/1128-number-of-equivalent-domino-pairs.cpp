class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& d) {
        int res=0;
        vector<int>freq(100,0);
        for(int i=0;i<d.size();i++){
            if(d[i][0]>d[i][1]) swap(d[i][0],d[i][1]);
            int num=d[i][0]*10+d[i][1];
            res+=freq[num];
            freq[num]++;
        }
        return res;
    }
};