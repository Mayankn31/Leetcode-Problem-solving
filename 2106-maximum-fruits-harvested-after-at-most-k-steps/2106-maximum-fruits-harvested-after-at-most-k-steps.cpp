class Solution {
public:
    int f(int l,int r,int s,vector<vector<int>>& fruits){
        int lp=fruits[l][0];
        int rp=fruits[r][0];
        return min(abs(s-rp)+(rp-lp),abs(s-lp)+(rp-lp));
    }
    int maxTotalFruits(vector<vector<int>>& fruits, int st, int k) {
        int l=0,r=0;
        int res=0,sum=0;
        int n=fruits.size();
        while(r<n){
            sum+=fruits[r][1];
            while(l<=r && f(l,r,st,fruits)>k){
                sum-=fruits[l][1];
                l++;
            }
            res=max(res,sum);
            r++;
        }
        return res;
    }
};