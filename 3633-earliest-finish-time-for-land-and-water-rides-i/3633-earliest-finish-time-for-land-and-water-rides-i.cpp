class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int m=landDuration.size();
        int n=waterDuration.size();
        int res=INT_MAX;
        int minLand=INT_MAX,minWater=INT_MAX;
        vector<int> lS(m);
        for(int i=0;i<m;i++){
            lS[i]=landStartTime[i]+landDuration[i];
            minLand=min(minLand,lS[i]);
        }
        vector<int> wS(n);
        for(int i=0;i<n;i++){
            wS[i]=waterStartTime[i]+waterDuration[i];
            minWater=min(minWater,wS[i]);
        }

        for(int i=0;i<m;i++){
            int lst=landStartTime[i];
            int ld=landDuration[i];
            if(lst>=minWater) res=min(res,lst+ld);
            else res=min(res,minWater+ld);
        }

        for(int i=0;i<n;i++){
            int wst=waterStartTime[i];
            int wd=waterDuration[i];
            if(wst>=minLand) res=min(res,wst+wd);
            else res=min(res,minLand+wd);
        }

        return res;
    }
};