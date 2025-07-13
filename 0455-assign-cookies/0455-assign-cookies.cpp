class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0;
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        int m=g.size(),n=s.size();
        while(i<m && j<n){
            if(g[i]<=s[j]) i++;
            j++;
        }
        return i;
    }
};