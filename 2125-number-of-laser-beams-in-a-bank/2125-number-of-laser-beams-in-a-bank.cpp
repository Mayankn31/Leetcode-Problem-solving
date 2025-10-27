class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        vector<int>cnt(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<bank[0].size();j++){
                if(bank[i][j]=='1') cnt[i]++;
            }
        }
        int res=0;
        int prev=cnt[0];
        for(int i=1;i<n;i++){
            if(cnt[i]==0) continue;
            else {
                res+=prev*cnt[i];
                prev=cnt[i];
            }
        }
        return res;
    }
};