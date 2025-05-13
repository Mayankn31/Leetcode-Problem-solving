class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        const int MOD=1000000007;
        vector<int>fre(26,0);
        for(char x:s) fre[x-'a']++;
        while(t--){
            vector<int>temp(26,0);
            if(fre[25]>0){
                temp[0]=(fre[25])%MOD;
                temp[1]=(fre[0]+fre[25])%MOD;
            }
            else temp[1]=fre[0];
            for(int i=2;i<26;i++){
                temp[i]+=(fre[i-1])%MOD;
            }
            fre=temp;
        }
        int res=0;
        for(int x:fre) res+=(x)%MOD;
        return res;
    }
};