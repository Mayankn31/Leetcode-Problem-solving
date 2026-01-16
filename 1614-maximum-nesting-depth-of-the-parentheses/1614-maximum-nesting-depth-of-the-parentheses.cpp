class Solution {
public:
    int maxDepth(string s) {
        int maxx=0;
        int st=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') st++;
            maxx=max(maxx,st);
            if(s[i]==')') st--;
        }
        return maxx-st;
    }
};