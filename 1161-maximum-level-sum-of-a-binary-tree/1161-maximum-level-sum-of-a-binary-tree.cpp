/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void func(TreeNode* root,int lvl,map<int,long long>& mp){
        if(root==NULL) return;
        mp[lvl]+=root->val;
        func(root->left,lvl+1,mp);
        func(root->right,lvl+1,mp);
    }
    int maxLevelSum(TreeNode* root) {
        map<int,long long> mp;
        func(root,1,mp);
        int res=0;
        long long max_sum=LLONG_MIN;
        for(auto &x:mp){
            if(x.second>max_sum){
                max_sum=x.second;
                res=x.first;
            }
        }
        return res;
    }
};