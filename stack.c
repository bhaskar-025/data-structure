#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node * next;
};
struct node *temp,*top = NULL;
int push(int val){
	struct node *nnode;
	nnode=(struct node*)malloc(sizeof(struct node));
	nnode->data=val;
	nnode->next=top;
	top=nnode;
}
int pop(){
	temp = top;
	top = temp->next;
	temp->next = NULL;
	free(temp);
	
}

int display(){
	struct node *temp=top;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
int main(){
	push(4);
	push(5);
	push(9);
	push(13);
	
	display();
	printf("\n");
	pop();
	
	display();
}
