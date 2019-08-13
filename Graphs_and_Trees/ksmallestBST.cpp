//Given a BST and an integer K, you need to find the Kth smallest element present in the BST. Return INT_MIN if that is not present in //the BST.


#include<bits/stdc++.h>

void inorder(BinaryTreeNode<int>* root, vector<int> &v){
    if(root==NULL) return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}


int findNode(BinaryTreeNode<int>* root, int k) {
	vector<int> v;
	inorder(root,v);
    if(v.size() < k) return INT_MIN ;
    else return v[k-1];

}