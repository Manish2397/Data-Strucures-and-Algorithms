/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

 //https://leetcode.com/problems/binary-tree-right-side-view/submissions/
class Solution {
public:
    
    int maxlevel=-1;
    vector<int> ans;
    void bfs(TreeNode* root,int level,vector<vector<int> > &v1){
        maxlevel=max(maxlevel,level);
        if(root!=NULL){
        v1[level].push_back(root->val);
        bfs(root->left,level+1,v1);
        bfs(root->right,level+1,v1);}
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int> > v1(10000);
        bfs(root,0,v1);
        for(int i=0;i<=maxlevel;i++){
            if(v1[i].size()>0)
            ans.push_back(v1[i][v1[i].size()-1]);
        }
        return ans;
    }
};