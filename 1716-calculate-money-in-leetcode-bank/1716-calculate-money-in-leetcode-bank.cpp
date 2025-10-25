class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int x=n/7;
        for(int i=0;i<x;i++){
            ans+=7*(i+4);
        }
        int y=n%7;
        cout<<ans;
        ans+=y*(2*(x+1)+(y-1))/2;
        return ans;
    }
};