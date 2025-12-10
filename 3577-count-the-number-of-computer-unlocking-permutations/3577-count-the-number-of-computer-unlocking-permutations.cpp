class Solution {
public:
    int mod=1e9+7;
    int fact(int n){
        if(n==1) return 1;
        return ((long long)n*(fact(n-1)))%mod; 
    }
    int countPermutations(vector<int>& complexity) {
        int res=0;
        int first=complexity[0];
        int n=complexity.size();
        for(int i=1;i<n;i++){
            if(complexity[i]<=first) return 0;
        }
        return fact(n-1)%mod;
    }
};