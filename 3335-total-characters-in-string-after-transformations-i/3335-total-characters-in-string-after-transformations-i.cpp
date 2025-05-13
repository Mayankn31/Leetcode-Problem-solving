class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        int mod=1e9+7;
        vector<int>fre(26,0);
        for(char c:s) fre[c-'a']++;
        while(t--){
            vector<int>temp(26,0);
            if(fre[25]>0){
                temp[0]=(fre[25])%mod;
                temp[1]=(fre[25])%mod;
            }
            for(int i=1;i<26;i++){
                temp[i]=(temp[i]+fre[i-1])%mod;
            }
            fre=temp;
        }
        int res=0;
        for(int x:fre) res=(res+x)%mod;
        return res;
    }
};