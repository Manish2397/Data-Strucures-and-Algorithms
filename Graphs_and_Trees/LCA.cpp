#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;





struct Node{
	int value;
	Node *left;
	Node *right;
};

Node *newNode(int value){
	Node *node = new Node;
	node->value=value;
	node->left=NULL;
	node->right=NULL;
	return node;
}

Node* LCA(int firstNode , int secondNode , Node *rootNode){
	if(rootNode==NULL) return NULL;
	if(firstNode==rootNode->value or secondNode==rootNode->value){
		return rootNode;
	}
	
	Node* left = LCA(firstNode,secondNode,rootNode->left);
	Node* right = LCA(firstNode,secondNode,rootNode->right);

	if(left!=NULL and right!=NULL){
		return rootNode;
	}
	if(left==NULL and right==NULL) return NULL;
	return left!=NULL?left:right;
	

}

int main(){
	Node *rootNode = newNode(9);
	rootNode->left = newNode(5);
	rootNode->right = newNode(4);
	rootNode->left->left = newNode(2);
	rootNode->left->right = newNode(3);
	rootNode->left->right->left = newNode(8);
	rootNode->left->right->left->right = newNode(1);
	rootNode->left->right->right = newNode(6);
	rootNode->right->right = newNode(7);
	cout<<LCA(6,2,rootNode)->value<<endl;
	return 0;
	
}