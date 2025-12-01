class Solution {
public:
    bool check(vector<int>& batteries,long long mid,int n){
        long long cur=mid*n;
        long long curSum=0;
        for(int i=0;i<batteries.size();i++){
            curSum+=min(mid,(long long)batteries[i]);
        }
        return curSum>=cur;
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        long long l=LLONG_MAX,r,sum=0;
        for(int x:batteries){
            l=min((long long)x,l);
            sum+=x;
        }
        r=sum/n;
        long long res=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(check(batteries,mid,n)){
                res=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        return res;
    }
};