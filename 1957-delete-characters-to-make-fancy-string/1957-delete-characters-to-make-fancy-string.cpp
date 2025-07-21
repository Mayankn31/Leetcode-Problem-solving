class Solution {
public:
    string makeFancyString(string s) {
        int cur=1;
        string res="";
        res+=s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) cur++;
            else cur=1;
            if(cur>=3) continue;
            res+=s[i];
        }
        return res;
    }
};