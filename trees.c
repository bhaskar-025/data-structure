#include <stdio.h>
#include<stdlib.h>
struct node{
	 int data;
	 struct node *left,*right; 
};
 struct node* create(){
 	int x;
	struct node *nnode;
	nnode=(struct node*)malloc(sizeof(struct node));
	printf("  or 0(if no node required)");
		scanf("%d",&x);
		if(x==0){
			return 0;
		}
		nnode->data=x; 
		printf("enter the left child number %d",x);
		nnode->left=create();
			printf("enter the right child number %d",x);
		nnode->right=create();
		
		return nnode;
}
int preorder(struct node *root){
	if(root==NULL){
		return 0;
	}
      printf("%d->",root->data);
      preorder(root->left);
      preorder(root->right);
}
int postorder(struct node *root){
	if(root==NULL){
		return 0;
	}
	postorder(root->left);
	 postorder(root->right);
      printf("%d->",root->data);
  }
int inorder(struct node *root){
	if(root==NULL){
		return 0;
	}
	inorder(root->left);
	 printf("%d->",root->data);
	 inorder(root->right);
     
  }
       
      


int main(){
	struct node*root=NULL;
	root=create();
	printf("your preorder tree is\n");
	preorder(root);
	printf("your postorder tree is\n");
	  postorder(root);
	  printf("your inorder tree is\n");
	  inorder(root);
	  
}
