class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles;
        int extra;
        while(numBottles>=numExchange){
            res+=numBottles/numExchange;
            extra=numBottles%numExchange;
            numBottles/=numExchange;
            numBottles+=extra;
        }
        return res;
    }
};