class Solution {
public:
    bool check(string a,string b){
        if(a.size()!=b.size()) return false;
        int dif=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]) dif++;
        }
        return dif==1;
    }
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=words.size();
        vector<int>dp(n,1);
        vector<int>prev(n,-1);
        int ls=0;
        int lidx=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(groups[i]!=groups[j] && check(words[i],words[j])){
                    if(dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                        prev[i]=j;
                    }
                    if(dp[i]>ls){
                        ls=dp[i];
                        lidx=i;
                    }
                }
            }
        }
        vector<string>res;
        while(lidx!=-1){
            res.push_back(words[lidx]);
            lidx=prev[lidx];
        }
        reverse(res.begin(),res.end());
        return res;
    }
};