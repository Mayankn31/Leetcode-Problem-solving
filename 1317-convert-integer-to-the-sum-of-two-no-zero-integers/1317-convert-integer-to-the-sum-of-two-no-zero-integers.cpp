class Solution {
public:
    bool check(int n){
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') return false;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            if(check(i) && check(n-i)) return {i,n-i};
        }
        return {};
    }
};