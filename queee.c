#include <stdio.h>
#include <stdlib.h>
 
 struct node{
 	int data;
 	struct node *next;
 };
 struct node *front=NULL ,*rear=NULL;
 int enquee(int val){
 	struct node*nnode;
 	nnode=(struct node *)malloc(sizeof(struct node));
 	nnode->data=val;
 	nnode->next=NULL;
 	if(front==NULL && rear==NULL){
 		front=rear=nnode;
	 }
	 else {
	 	rear->next=nnode; 
	 	rear=nnode;
	 }
	 }
int display(){
	struct node * temp=front;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int dequee(){
	struct node *temp;
	if(front==NULL&& rear==NULL){
		printf("empty queque");
		return 1;
	}
	else if(front==rear){
		temp=front;
		printf("dequeed value is %d\n",temp->data);
		front=rear=NULL;
		free(temp);
	}
	else {
		temp=front;
		printf("dequeed value is %d\n",temp->data);
		front=temp->next;
		free(temp);
	}
}	 
 
 int main(){
 	enquee(10);
 	enquee(20);
 	enquee(30);
 	enquee(40);
 	display();
 	dequee();
 	display();
 	dequee();
 	display();
 	dequee();
 	display();
 	dequee();
 	display();
 	dequee();
 	display();
 	
 	
 }
