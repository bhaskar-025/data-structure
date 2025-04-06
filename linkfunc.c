# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node *next;
};


void create_linke_list(struct node **head){
	int y=1;
struct node*newnode,*temp;
	while(y==1){
		
    newnode = (struct node*)malloc(sizeof(struct node));
	printf("enter the element");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(*head==NULL){
		
		*head=temp=newnode;
	}
	else {
		temp->next=newnode;
		temp=newnode;
			
		}
		printf("enter the nomber 1 to continue");
     scanf("%d",&y);
 }
}

void display( struct node *temp){
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
}
printf("null");
}
insert_at_first(struct node **head){

	printf("enter the element you wanted to insert at first");

	struct node *snode,*temp;
	temp=*head;
	snode= (struct node*)malloc(sizeof(struct node));
		scanf("%d",&snode->data);
	snode->next=temp;
	*head=snode;
	
}
insert_at_any_position(struct node **head){
	struct node * anode,*temp;
	int p;
	printf("enter the postion you wanted to insert");
	scanf("%d",&p);
	anode=(struct node*)malloc(sizeof(struct node));
	printf("enter the element you wanna insert");
	scanf("%d",&anode->data);
	temp=*head;
	int k=1;
	while(temp!=NULL&&k<p-1){
		temp=temp->next;
	}
	anode->next=temp->next;
	temp->next=anode;
	
}
insert_at_last(struct node** head){
	struct node *enode,*temp;
	enode=(struct node*)malloc(sizeof(struct node));
	printf("enter the element you wanted to insert at last");
	scanf("%d",&enode->data);
	temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=enode;
	enode->next=NULL;
}
void delete_first(struct node **head){
	struct node* temp;
	temp=*head;
	*head=temp->next;
	free(temp);
}
void delete_end(struct node **head){

struct node *temp,*p;
   temp=*head;
while (temp->next->next!=NULL){
	temp=temp->next;
}
p=temp->next;
    temp->next=NULL;
    free(p);
}
int main(){
	struct node *head=NULL;
	int ch;
	create_linke_list(&head);
	display(head);
	
	while(1){
		printf("\n\n1.enter 1 to insert a number aty first\n 2. enter 2 to insert at any position\n");
	printf("3.entet 3 for insert element at end\n4. enter 4  delete first element\n 5. enter 5 to delete last element\n ");
	
	scanf("%d",&ch);
		switch(ch){
		
		case 1: {
			insert_at_first(&head);
	        display(head);
			break;
		}
		case 2: {
			insert_at_any_position(&head);
	        display(head);
			break;
		}
		case 3: {
				insert_at_last(&head);
	            display(head);
			break;
		}
		case 4:{
			delete_first(&head);
			display(head);
			break;
		}
		case 5: {
			delete_end(&head);
			display(head);
			break;
		}
	
	}
}

	return 0;
}












