#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


//https://leetcode.com/problems/range-sum-of-bst/


struct Node{
	int val;
	Node *left;
	Node *right;
};

Node *newNode(int value){
	Node *node = new Node;
	node->val=value;
	node->left=NULL;
	node->right=NULL;
	return node;
}

    int sum = 0;
   
int rangeSumBST(Node* root, int L, int R) {
    if(root==NULL){
        return 0;
    }
    if(root->val<L){
    	rangeSumBST(root->right,L,R);
    }
    if(root->val>R){
       rangeSumBST(root->left,L,R);
    }
    if(root->val>=L and root->val<=R){
    
        sum+=root->val;
        rangeSumBST(root->right,L,R);
        rangeSumBST(root->left,L,R);
    } 
    return sum;
}

int main(){
	Node *rootNode=newNode(4);
	rootNode->left=newNode(2);
	rootNode->right=newNode(6);
	rootNode->left->left=newNode(1);
	rootNode->right->right=newNode(7);
	rootNode->left->right=newNode(3);
	rootNode->right->left=newNode(5);
	cout<<rangeSumBST(rootNode,4,6);
	return 0;
}