#include<stdio.h>
#include<stdlib.h>
struct node{
int item;
struct node *left;
struct node *right;
};
void inordertrav(struct node *root){
	if(root==NULL)return;
	inordertrav(root->left);
	printf("%d",root->item);
	inordertrav(root->right);
}
void preordertrav(struct node *root){
	if(root==NULL)return;
	printf("%d",root->item);
	preordertrav(root->left);
	preordertrav(root->right);
}
void postordertrav(struct node *root){
	if(root==NULL)
		postordertrav(root->left);
		postordertrav(root->right);
		printf("%d",root->item);
	}
	struct node *createnode(int value){
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		newnode->item=value;
		newnode->left=NULL;
		newnode->right=NULL;
	}
	struct node *insertleft(struct node *root,int value){
		root->left=createnode(value);
		return root->left;
	}
	struct node *insertright(struct node *root,int value){
		
		root->right=createnode(value);
		return root->right;
	}
	int main(){
		struct node *root=createnode(1);
		insertleft(root,12);
		insertright(root,69);
		insertleft(root->left,3);
		insertright(root->right,9);
		printf("traversal inorder:\n");
		inordertrav(root);
		printf("\npreorder travesal:");
		preordertrav(root);
		printf("\npostorder travsel:");
		postordertrav(root);
		return 0;
	}
