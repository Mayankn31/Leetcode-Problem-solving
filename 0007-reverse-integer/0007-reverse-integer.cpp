class Solution {
public:
    int reverse(int x) {
        long long num=0;
        while(x!=0){
            num=num*10+x%10;
            x/=10;
        }
        cout<<num;
        if(num>=pow(2,31) || num<pow(-2,31)) return 0;
        return num;
    }
};