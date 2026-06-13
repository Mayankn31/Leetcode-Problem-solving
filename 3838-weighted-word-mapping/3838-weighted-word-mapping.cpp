class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(int i=0;i<words.size();i++){
            int cur=0;
            for(char c:words[i]){
                cur+=weights[c-'a'];
            }
            cur%=26;
            res+='a'+(25-cur);
        }
        return res;
    }
};