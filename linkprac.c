# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node *next;
}; 
int main(){
	int y=1;
	struct node *head=NULL ,*temp,*newnode,*nnode,*after,*current;
	
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
	int p;
	printf("enter the positon where you want to insert a ner link");
	scanf("%d",&p);
	int k=1;
	 temp=head;
	 while(temp != NULL && k< p-1){
	 	temp=temp->next;
	 	k++;
	 }
	 after=temp->next;
	 current=temp;
	 y=1;
	while(y==1){
		
    newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&newnode->data);
	current->next=newnode;
	newnode->next=after;
	current=newnode;
	
		
		printf("enter the nomber 1 to continue");
     scanf("%d",&y);
	}
	  temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL");
}
