class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int result=0;
        for(int i=1;i<n;i++){
            int curSum=0;
            int curMax=INT_MIN;
            while(colors[i]==colors[i-1]){
                curMax=max(curMax,max(neededTime[i-1],neededTime[i]));
                curSum+=neededTime[i-1];
                i++;
            }
            if(curMax!=INT_MIN){
                curSum+=neededTime[i-1];
                result+=(curSum-curMax);
            }
        }
        return result;
    }
};