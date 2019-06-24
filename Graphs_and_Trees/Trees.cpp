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

void preorder(Node *rootNode){
	if(rootNode==NULL){
		return;
	}
	cout<<rootNode->value<<" ";
	preorder(rootNode->left);
	preorder(rootNode->right);
}

void inorder(Node *rootNode){
	if(rootNode==NULL){
		return;
	}
	inorder(rootNode->left);
	cout<<rootNode->value<<" ";
	inorder(rootNode->right);
}

void postorder(Node *rootNode){
	if(rootNode==NULL){
		return;
	}
	postorder(rootNode->left);
	postorder(rootNode->right);
	cout<<rootNode->value<<" ";
}




int main(){
	
	Node *rootNode=newNode(4);
	rootNode->left=newNode(2);
	rootNode->right=newNode(6);
	rootNode->left->left=newNode(1);
	rootNode->right->right=newNode(7);
	rootNode->left->right=newNode(3);
	rootNode->right->left=newNode(5);
	preorder(rootNode);
	cout<<endl;
	inorder(rootNode);
	cout<<endl;
	postorder(rootNode);
	cout<<endl;
}
