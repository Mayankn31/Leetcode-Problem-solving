class Solution {
public:
    int possibleStringCount(string word) {
        int res=1;
        int cur=0;
        for(int i=1;i<word.size();i++){
            if(word[i]!=word[i-1]){
                if(cur>=1)res+=cur;
                cur=0;
            }
            else cur++;
        }
        if(cur>=1)res+=cur;
        return res;
    }
};