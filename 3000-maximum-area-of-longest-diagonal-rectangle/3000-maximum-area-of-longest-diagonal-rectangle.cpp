class Solution {
public:
    double diag(int a,int b){
        return sqrt((a*a)+(b*b));
    }
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int res=0;
        double cur=0;
        for(auto x:dimensions){
            if(diag(x[0],x[1])>cur){
                cur=diag(x[0],x[1]);
                res=x[0]*x[1];
            }
            else if(diag(x[0],x[1])==cur) res=max(res,x[0]*x[1]);
        }
        return res;
    }
};