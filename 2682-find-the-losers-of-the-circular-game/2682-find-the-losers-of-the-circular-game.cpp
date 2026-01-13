class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool>vis(n,false);
        int i=0,j=1;
        while(!vis[i]){
            vis[i]=true;
            i+=k*j;
            i%=n;
            j++;
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            if(!vis[i]) res.push_back(i+1);
        }
        return res;
    }
};