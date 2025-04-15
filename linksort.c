# include <stdio.h>
# include <stdlib.h>
struct node {
	int data;
	struct node *next;
}; 
int main(){
	int y=1;
	struct node *head=NULL ,*temp,*newnode;
	
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
     temp=head;
     int k=0;
     while(temp!=NULL){
     	temp=temp->next;
     	k++;
     	
	 }
	 
	 
	 
	 int i,j,p;
	 for(i=1;i<k;i++){
	 	temp=head;
	 	for(j=1;j<k;j++){
	 		if(temp->data > temp->next->data){
	 			p=temp->data;
	 			temp->data=temp->next->data;
	 			temp->next->data=p;
			 }
			 temp=temp->next;
		 }
	 }
	 temp=head;
	  while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
	 }
	 printf("NULL");

}
