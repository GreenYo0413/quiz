#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct TreeNode{
	int data;
	struct TreeNode *right;
	struct TreeNode *left;
} TreeNode;

void flatten(TreeNode *root);

int main(int argc, char *argv[]){
	TreeNode *root;

	root=(TreeNode*)malloc(sizeof(TreeNode));
	root->data=1;
		root->left=(TreeNode*)malloc(sizeof(TreeNode));
		root->left->data=2;
			root->left->left=(TreeNode*)malloc(sizeof(TreeNode));
			root->left->left->data=3;
			root->left->left->left=NULL;
			root->left->left->right=NULL;
			root->left->right=(TreeNode*)malloc(sizeof(TreeNode));
			root->left->right->data=4;
			root->left->right->left=NULL;
			root->left->right->right=NULL;
		root->right=(TreeNode*)malloc(sizeof(TreeNode));
		root->right->data=5;
			root->right->left=NULL;
			root->right->right=(TreeNode*)malloc(sizeof(TreeNode));
			root->right->right->data=6;
			root->right->right->left=NULL;
			root->right->right->right=NULL;
	flatten(root);
	while(root != NULL){
		printf("%d",root->data);
		root=root->right;
	}
	putchar('\n');
	return 0;
}

void flatten(TreeNode *root){
	if(root==NULL)
		return;	
	else{
		if(root->left!=NULL){
			TreeNode* p=root->left;
			while(p->right != NULL){
				p=p->right;
			}
			p->right=root->right;
			root->right=root->left;
			root->left=NULL;
		}
		flatten(root->right);
	}
}
