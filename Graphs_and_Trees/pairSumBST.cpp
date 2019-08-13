//Given a binary search tree and a integer S, find pair of nodes in the BST which sum to S. You can use extra space only O(log n).



// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/
#include<bits/stdc++.h>
void solve(BinaryTreeNode<int> *root, int s,vector<pair<int,int> > &v,map<int,int> &m){
    if(root == NULL){
        return;
    }
    else if(root->data > s){
        solve(root->left,s,v,m);
        return;
    }
    
    m[root->data]=1;
    if(m.count(s - root->data)  and (s - root->data)!=root->data){
        v.push_back({root->data,s - root->data});
        
        
    }
    solve(root->right,s,v,m);
    solve(root->left,s,v,m);
}


void printNodesSumToS(BinaryTreeNode<int> *root, int s) {
    // Write your code here
    vector<pair<int,int> > v;
    map<int,int> m;
    solve(root,s,v,m);
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    v.clear();
    m.clear();

}
