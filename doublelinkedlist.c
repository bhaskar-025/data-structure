# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node* next;
	struct node* prev;
};
int main(){
	struct node *head=NULL,*temp,*nnode,*fnode,*enode,*anode;
	int y=1;
	while(y==1){
		nnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the number");
		scanf("%d",&nnode->data);
		nnode->next=NULL;
		
		if(head==NULL){
			head=temp=nnode;
			nnode->prev=head;
		}
		else {
			nnode->prev=temp;
			temp->next=nnode;
			temp=nnode;
		}
	
	printf("enter the nomber 1 to continue");
     scanf("%d",&y);
}
      printf("resultant list");
     temp=head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 
     printf("NULL\n");
	

//insert at first  postion 
printf("enter the number you wanted to put at first");
fnode=(struct node*)malloc(sizeof(struct node));
scanf("%d",& fnode->data);
fnode->next=head;
head->prev = fnode;
head=fnode;
fnode->prev=NULL;

 printf(" list after first place insertion:-");
temp=head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
     printf("NULL\n");
     //to inset a double linked at the end
     enode=(struct node*)malloc(sizeof(struct node));
     printf("enter the element you want to put in last:- ");
     scanf("%d", &enode->data);
     temp=head;
     while(temp->next!=NULL){
     	temp=temp->next;
	 }
	 
	 temp->next=enode;
	 enode->prev=temp;
	 enode->next=NULL;
	 printf(" list after inserting at the end:-");
	 temp=head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
     printf("NULL\n");
     
     // to insert at any position
     temp=head;
     anode=(struct node*)malloc(sizeof(struct node));
	 int p;
	 printf("enter the position you wanted to insert:-");
	 scanf("%d",&p);
	 printf("enter the number you wanted to put at position %d:-",p);
	 scanf("%d",&anode->data);
	 int k=1;
	 while(temp!=NULL&&k<p-1){
	 	temp=temp->next;
	 	k++;
	 }
	 temp->next->prev=anode;
	 anode->next=temp->next;
	 anode->prev=temp;
	 temp->next=anode;
	 temp=head;
	 printf(" list after inserting at position %d:-",p);
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
     printf("NULL\n");
     //to print the given liked list into the revese order
       temp = head;
  
    while (temp->next != NULL) {
        temp = temp->next;
    }
    printf("reverse list");
     while (temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->prev;
	 }
	   printf("NULL\n");
	   
	   //deletion of the first element
	   temp=head;
	   head=temp->next;
	   head->prev=NULL;
	   free(temp);
	    temp=head;
	    printf("list after deleting 1st element:-");
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
     printf("NULL\n");
     // to delete from last
     temp=head;
      while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    temp=head;
    printf("list after deleteing the end element:-");
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
     printf("NULL\n");
     
     // to delete the element of specific position
     temp=head;
     int h;
     printf("enter the position you wanted to delete:-");
     scanf("%d",&h);
     k=1;
     while(temp!=NULL&&k<h){
	 	temp=temp->next;
	 	k++;
	 }
	 temp->prev->next=temp->next;
	 temp->next->prev=temp->prev;
	 free(temp);
     temp=head;
     printf("list after deleting th position %d:",h);
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
     printf("NULL\n");
}



