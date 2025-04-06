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
// to rotate the given linked list by k step
int k;
printf("enter the times to which you wanted to rotate");
scanf("%d",&k);
int count=0;

while(count<k){

temp=head;
     while(temp->next!=NULL){
     	prev=temp;
     	temp=temp->next;
	 }
	  temp->next=head;
	  head=temp;
	  prev->next=NULL;
	  count++;
}
	  
	   temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL");
}

