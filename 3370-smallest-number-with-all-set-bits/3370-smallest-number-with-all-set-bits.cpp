class Solution {
public:
    int smallestNumber(int n) {
        vector<int> sum={1,3,7,15,31,63,127,255,511,1023};
        for(int i=0;i<10;i++){
            if(sum[i]>=n) return sum[i];
        }
        return 0;
    }
};