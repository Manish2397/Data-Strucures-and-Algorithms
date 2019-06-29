#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;




//https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/


vector<vector<int> > ans;

void levelOrder(TreeNode* root,int level){
    if(root==NULL) return;
    if(ans.size()==level){
        vector<int> temp;
        temp.push_back(root->val);
        ans.push_back(temp);
    }
    else{
        ans[level].push_back(root->val);
    }
    levelOrder(root->left,level+1);
    levelOrder(root->right,level+1);
}
vector<vector<int>> levelOrder(TreeNode* root) {
    levelOrder(root,0);
    return ans;
}


int main(){
	
	return 0;
}