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


bool isSymmetric(Node *leftTree,Node *rightTree){
	if(leftTree==NULL and rightTree==NULL){
		return true;
	}
	
	if(leftTree->value==rightTree->value){
		return isSymmetric(leftTree->left,rightTree->right) and isSymmetric(leftTree->right,rightTree->left);
	}
	else
	return false;
}


int main(){
	
	Node *rootNode=newNode(1);
	rootNode->left=newNode(2);
	rootNode->right=newNode(2);
	rootNode->left->left=newNode(3);
	rootNode->right->right=newNode(3);
	rootNode->left->right=newNode(4);
	rootNode->right->left=newNode(4);
	cout<<isSymmetric(rootNode->left,rootNode->right);
}