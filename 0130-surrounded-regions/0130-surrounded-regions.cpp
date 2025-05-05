class Solution {
public:
    int m,n;
    void dfs(int i,int j,vector<vector<char>>& board,vector<vector<bool>>& mark){
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='X' || mark[i][j]==true) return;
        mark[i][j]=true;
        dfs(i+1,j,board,mark);
        dfs(i,j+1,board,mark);
        dfs(i-1,j,board,mark);
        dfs(i,j-1,board,mark);
    }
    void solve(vector<vector<char>>& board) {
        m=board.size();
        n=board[0].size();
        vector<vector<bool>>mark(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            if(board[i][0]=='O' && !mark[i][0]) dfs(i,0,board,mark);
            if(board[i][n-1]=='O' && !mark[i][n-1]) dfs(i,n-1,board,mark);
        }
        for(int i=0;i<n;i++){
            if(board[0][i]=='O' && !mark[0][i]) dfs(0,i,board,mark);
            if(board[m-1][i]=='O' && !mark[m-1][i]) dfs(m-1,i,board,mark);
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && !mark[i][j]){
                    board[i][j]='X';
                }
            }
        }
    }
};