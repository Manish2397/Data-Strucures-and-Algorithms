#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;

//https://leetcode.com/problems/n-ary-tree-preorder-traversal/
vector<int> ans;
void preorder2(Node* root) {
    if(root==NULL) return;
     ans.push_back(root->val);
    for(auto node:root->children){
        
       
        preorder(node);
        
    }
    
}
vector<int> preorder(Node* root) {
    preorder2(root);
    return ans;}



int main(){
	
	return 0;
}