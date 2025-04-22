#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node{
	 int data;
	 struct node *left,*right; 
};
struct node*root=NULL,*root2=NULL;
int p=0;
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
//		printf("enter the left child number %d",x);
		nnode->left=create();
//			printf("enter the right child number %d",x);
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
    int height(struct node*root){
    	if(root==NULL){
    		return -1;
		}
		int l=height(root->left);
		int r=height(root->right);
		return (l>r ? l:r)+1;
		
	}  
	 int level(struct node*root){
    	if(root==NULL){
    		return 0;
		}
		int l=height(root->left);
		int r=height(root->right);
		return (l>r ? l:r)+1;
		
	} 
	
 int no_of_leaf_node(struct node* root) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        p++;
    }
    no_of_leaf_node(root->left);
    no_of_leaf_node(root->right);
}
bool isidentical(struct node *r1,struct node *r2){
		if(r1== NULL && r2==NULL){
			return true;
		}
		if(r1==NULL||r2==NULL){
			return false;
		}
		return r1->data && r2->data &&isidentical(r1->left,r2->left) &&isidentical(r1->right,r2->right);
	}
bool children_sum_tree(struct node*r1){
	  	if(r1==NULL){
	  		return true;
		}
		if(r1->left==NULL&&r1->right==NULL){
			return true;
		}
		
    int left_data = 0, right_data = 0;

    if (r1->left != NULL) {
        left_data = r1->left->data;
    }
    if (r1->right != NULL) {
        right_data = r1->right->data;
    }
		if(r1->data==left_data+right_data&&children_sum_tree(r1->left)&&
	children_sum_tree(r1->right)){
			return true;
		}
		else {
		return false;
	}
	
	  } 
      
bool tree_bst(struct node *r1){
	if(r1==NULL){
		return true;
	}
	if(r1->left==NULL&&r1->right==NULL){
		return true;
	}
	if(r1->data > r1->left->data && r1->data < r1->right->data && tree_bst(r1->left)&&tree_bst(r1->right)){
		return true;
	}
	else {
		return false;
	}
}

int main(){
	
	printf("enter root node");
	root=create();
	printf("\nyour preorder tree is\n");
	preorder(root);
	printf("\nyour postorder tree is\n");
	  postorder(root);
	  printf("\nyour inorder tree is\n");
	  inorder(root);
	  printf("\nheight of tree is :%d",height(root));
	  no_of_leaf_node(root);

	  printf("\nno of leaf nodes %d",p);
//	  root2=create();
//	  printf("\nyour preorder tree is\n");
//	preorder(root2);
//	if(isidentical(root,root2)){
//		printf("yes");
//	}
//	  else 
//	  {
//	  	printf("no");
//	  }
	  if(children_sum_tree(root)){
	  	printf("\nyes it is children sum tree");
	  }
	  else{
	  	printf("\nno it is not children sum series");
	  }
	  
	  if(tree_bst(root)){
	  	printf("yes it is a binary search tree");
	  }
	  else{
	  	printf("no it is not a bst");
	  }
	  
}
