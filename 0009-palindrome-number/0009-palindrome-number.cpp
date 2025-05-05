class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long long num=0,n=x;
        while(n>0){
            num=num*10+n%10;
            n/=10;
        }
        return num==x;
    }
};