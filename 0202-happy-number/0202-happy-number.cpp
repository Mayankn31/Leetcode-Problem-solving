class Solution {
public:
    bool isHappy(int n) {
        while(n>0){
            int m=0;
            while(n>0){
                m+=(n%10)*(n%10);
                n/=10;
            }
            n=m;
            if(n/10==0){
                if(n==1 || n==7){
                    return true;
                }
                return false;
            }
        }
        return false;
    }
};