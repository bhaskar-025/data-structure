# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node *next;
}; 
int main(){
	int y=1;
	struct node *head=NULL ,*temp,*newnode,*thead=NULL,*nnode,*current;
	
	while(y==1){
		
    newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL){
		
		head=temp=newnode;
	}
	else {
		temp->next=newnode;
		temp=newnode;
			
		}
	
		
		printf("enter the nomber 1 to continue");
     scanf("%d",&y);
	}
	
	temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL");
	printf("\nnow enter the element of another linked list\n");
	y=1;	
	while(y==1){
		
    nnode = (struct node*)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&nnode->data);
	nnode->next=NULL;
	if(thead==NULL){
		
		thead=current=nnode;
	}
	else {
		current->next=nnode;
		current=nnode;	
		}
		printf("enter the nomber 1 to continue");
     scanf("%d",&y);
	}
	current= thead;
     while(current!=NULL){
     	printf("%d->",current->data);
     	current=current->next;
	 }
     printf("NULL\n");

     temp=head;
    while(temp->next!=NULL){
    	temp=temp->next;
	}
	temp->next=thead;
		temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL\n");
     
 }
