# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node *next;
}; 
int main(){
	int y=1;
	struct node *head=NULL ,*temp,*newnode,*stemp,*ptemp;
	
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
   temp=head;
   temp->next=temp->next->next;
   temp->next->next=head;
   head=temp->next;
   
   
    
    
    
    
    temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL");
     
     


}

