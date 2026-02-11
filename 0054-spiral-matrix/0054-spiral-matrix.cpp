class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();

        int lft=0,rgt=n-1;
        int top=0,btm=m-1;

        vector<int>ans;

        while(top<=btm && lft<=rgt){
            for(int i=lft;i<=rgt;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=btm;i++){
                ans.push_back(matrix[i][rgt]);
            }
            rgt--;

            if(lft>rgt || top>btm) break;

            for(int i=rgt;i>=lft;i--){
                ans.push_back(matrix[btm][i]);
            }
            btm--;
            for(int i=btm;i>=top;i--){
                ans.push_back(matrix[i][lft]);
            }
            lft++;
        }

        return ans;
    }
};