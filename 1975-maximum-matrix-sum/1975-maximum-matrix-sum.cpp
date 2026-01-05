class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int cnt=0,min_ele=INT_MAX;
        bool zero=false;
        for(auto &x: matrix){
            for(int &y: x){
                if(y==0) zero=true;
                else if(y<0){
                    cnt++;
                    min_ele=min(min_ele,-y);
                    sum-=y;
                }
                else{
                    sum+=y;
                    min_ele=min(min_ele,y);
                }
            }
        }
        if(cnt%2==0 || zero) return sum;
        return sum-=2*min_ele;
    }
};