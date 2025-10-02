class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        if(numBottles<numExchange) return numBottles;
        int bottlesDrunk=0;
        int emptyBottles=0;
        while(numBottles+emptyBottles>=numExchange){
            while(emptyBottles>=numExchange){
                emptyBottles-=numExchange;
                numExchange+=1;
                numBottles+=1;
            }
            bottlesDrunk+=numBottles;
            emptyBottles+=numBottles;
            numBottles=0;
        }
        return bottlesDrunk;
    }
};