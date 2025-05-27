class Solution {
public:
    int numberOfSpecialChars(string word) {
        int res=0;
        vector<int>cap(26,-1);
        vector<int>sma(26,-1);
        unordered_set<char>st;
        for(int i=0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z'){
                sma[word[i]-'a']=i;
            }
            else if(st.find(word[i])==st.end()){
                cap[word[i]-'A']=i;
                st.insert(word[i]);
            }
        }
        for(int i=0;i<26;i++){
            if(cap[i]==-1 || sma[i]==-1) continue;
            if(sma[i]<cap[i])res++;
        }
        return res;
    }
};