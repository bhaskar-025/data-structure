# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node *next;
}; 
int main(){
	int y=1;
	struct node *head=NULL ,*temp,*newnode,*nnode,*enode,*rnode,*prev;
	
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


    nnode = (struct node*)malloc(sizeof(struct node));
    printf("\nenter the element you wanna to insert at first");
    scanf("%d",&nnode->data);
    nnode->next=head;
    head=nnode;
     temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 printf("NULL");
	 
	 
	 // to insert at last
	 
	  enode = (struct node*)malloc(sizeof(struct node));
	  printf("\nenter the element you wanna to insert at end");
	  scanf("%d",&enode->data);
	  temp=head;
	  while(temp->next!=NULL){
	  	temp=temp->next;
	  }
	  temp->next=enode;
	  enode->next=NULL;
	  temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 printf("NULL");
	 // to insert in any position
	 rnode = (struct node*)malloc(sizeof(struct node));
	 printf("\nenter the position where to wanna insert number:-");
	 int r;
	 scanf("%d",&r);
	 printf("enter the number you wanted to put");
	 scanf("%d",&rnode->data);
	 int k=1;
	 temp=head;
	 while(temp != NULL && k< r-1){
	 	temp=temp->next;
	 	k++;
	 }
	rnode->next=temp->next;
	temp->next=rnode;
	
	temp=head;
	while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 printf("NULL");
	 
	 // deletion of first element 
	 temp=head;
	 head= temp->next;
	 free(temp);
	 temp=head;
	 printf("\n element after deleting first element");
	while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 printf("NULL");
	 //delete the last element
	 temp=head;
	 while(temp->next!=NULL){
	 	prev=temp;
	 	temp=temp->next;
	 }
	 prev->next=NULL;
	 free(temp);
	  temp=head;
	 printf("\n element after deleting first element");
	while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 printf("NULL");
	 // to delete an element of any position
	 int m;
	 printf("\nenter the index which you wanted to delete :-");
	 scanf("%d",&m);
	 int c=1;
	 temp=head;
	 while(c<m){
	 	prev=temp;
	 	temp=temp->next;
	    c++;
	 }
	 prev->next=temp->next;
	 free(temp);
	  temp=head;
	 printf("\n element after deleting %d index element",m);
	while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 printf("NULL");
	 
}

