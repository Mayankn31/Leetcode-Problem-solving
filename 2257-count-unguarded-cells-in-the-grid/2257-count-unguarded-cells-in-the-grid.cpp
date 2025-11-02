class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid){
        int m=grid.size();
        int n=grid[0].size();
        for(int k=i+1;k<m;k++){
            if(grid[k][j]==2 || grid[k][j]==1) break;
            grid[k][j]=3;
        }
        for(int k=i-1;k>=0;k--){
            if(grid[k][j]==2 || grid[k][j]==1) break;
            grid[k][j]=3;
        }
        for(int k=j+1;k<n;k++){
            if(grid[i][k]==2 || grid[i][k]==1) break;
            grid[i][k]=3;
        }
        for(int k=j-1;k>=0;k--){
            if(grid[i][k]==2 || grid[i][k]==1) break;
            grid[i][k]=3;
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>grid (m,vector<int>(n,0));
        for(auto &x:guards){
            grid[x[0]][x[1]]=1;
        }
        for(auto &x:walls){
            grid[x[0]][x[1]]=2;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid);
                }
            }
        }
        int result=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) result++;
            }
        }
        return result;
    }
};