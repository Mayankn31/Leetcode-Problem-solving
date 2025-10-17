class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        long long mul=1;
        vector<int>res;
        while(n>0){
            int cur=n%10;
            n/=10;
            if(cur)res.push_back(cur*mul);
            mul*=10;
        }
        sort(res.rbegin(),res.rend());
        return res;
    }
};