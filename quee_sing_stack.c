#include <stdio.h>
 # define N 5
 int stack1[N];
 int top1=-1;
 int stack2[N];
 int top2=-1;
 int count=0;
 int push(int val){
 	if(top1==N-1){
	 printf("stack is filled");
	 return -1;
}
 		else{
 			top1++;
 			stack1[top1]=val;
 			count++;
 			 return 0;
		 }
	 }
 
 int enquee(int val){
 	push(val);
 }

 int pop1(){
 	int r;
 	if(top1==-1){
	 
 	printf("stack empty");
 	return -1;
 }
 	else{
// 		printf("%d is popped",stack1[top1]);
         r=stack1[top1];
 		top1--;
 		return r;
	 }
	 
 }
 int pop2(){
 	if(top2==-1){
	 
 	printf("stack empty");
 	return -1;
 }
 	else{
// 		printf("%d is popped",stack2[top2]);
 		
 		int r;
 		r=stack2[top2];
 		top2--;
 		return r;
	 }
	 
}
 int dequee(){
 	  if (top1 == -1 && top2 == -1) {
        printf("Queue is empty\n");
        return -1;
    }
 	int i;
 	if (top2 == -1) {
 	for(i=0;i<count;i++){
 		top2++;
 		stack2[top2]=pop1();
	 }
}
	  count--;
	  return pop2();

 }
 int main(){
 	enquee(10);
 	enquee(20);
 	enquee(30);
 	enquee(40);
 	printf("Dequeued: %d\n", dequee());
    printf("Dequeued: %d\n", dequee());
    printf("Dequeued: %d\n", dequee());
    printf("Dequeued: %d\n", dequee());
 	
 }

