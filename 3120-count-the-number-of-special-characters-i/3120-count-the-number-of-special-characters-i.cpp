class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>cap(26,0);
        vector<int>sma(26,0);
        for(char x:word){
            if(x>='a' && x<='z') sma[x-'a']++;
            else cap[x-'A']++;
        }
        int res=0;
        for(int i=0;i<26;i++){
            if(sma[i] && cap[i])res++;
        }
        return res;
    }
};