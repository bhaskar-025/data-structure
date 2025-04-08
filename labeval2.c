# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head=NULL ,*temp;
int rotate(){
	int k;
     printf("\nenter the times you want to rotate");
     scanf("%d",&k);
     int i=0;
     while(i<k){
     	temp=head;
     	while(temp->next->next!=NULL){
     		temp=temp->next;
     	}
     		temp->next->next=head;
     		head=temp->next;
     		temp->next=NULL;
		 
		 i++;
	 }
	 
	 printf("link list after rotation %d times :-",k);
	  temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL");
}

int delete_dublicate_file(){
	struct node *cursor,*prev;
	cursor=head;
	temp=head;
	temp=temp->next;
	prev=head;
	while(temp!=NULL){
		cursor=head;
	while(cursor!=temp){
		if(temp->data==cursor->data){
			prev->next=temp->next;
			free(temp);
			temp=prev->next;
			break;
		}
		cursor=cursor->next;
	}
	prev=temp;
	temp=temp->next;
	}
	printf("\n linke list after deleting duplicate nodes");
	 temp= head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL");
}
 
int main(){
	int y=1;
	struct node *newnode;
	
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
     
     //to rotate the linked list k tiimes
     rotate();
     delete_dublicate_file();
 }
