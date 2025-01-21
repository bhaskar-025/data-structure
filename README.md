//# data-structure
//1 st lab work

#include <stdio.h>
int print_element(int a[],int n){
 	int i;
 	printf("\n");
 	
 		for(i=0;i<n;i++){
 			printf("%d\t",a[i]);
 		}
 	}
int array_element(int a[],int n){
	int i;
	for(i=0;i<n-3;i++){
		scanf("%d",&a[i]);
	}
	print_element(a,n-3);	
	}
int insert_in_start(int a[],int n){
 		int i;
 		int p;
 		printf("\n");
 		printf("\n enter the element you wanted to put in start:-");
 		scanf("%d",&p);
 		for(i=n-3;i>0;i--){
 			a[i]=a[i-1];
		 }
		 a[0]=p;
		 printf("\n your array becomes");
		  print_element(a,n-2);
	
	}
int insert_at_last(int a[],int n){
	int r;
	
	printf("\n enter the element you wanted to add in last:-");
	scanf("%d",&r);
	a[n-2]=r;
	printf("\n your array becomes");
	print_element(a,n-1);
	}
int insert_at_position(int a[],int n){
		int r,i;
		
		printf("\n enter the index in which you wanted to insert element:-");
		scanf("%d",&r);
		int p;
		
		printf("\nenter the number you wanted to insert");
		scanf("%d",&p);
		for(i=n-1;i>r;i--){
			a[i]=a[i-1];
		}
		a[r]=p;
		printf("\n your array becomes");
		print_element(a,n);
		
		
	}
int array_sort(int a[],int n){
	
	printf("\nsorted array is\n");
	int i,j;
	int temp;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	print_element(a,n);
	}
int sorting_of_even_place_element(int a[],int n){
	int i,j,k,l;
	printf("\n");
	printf("sorting of even place element ");
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
			if(i%2!=0&&j%2!=0&&a[j]<a[i]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
      print_element(a,n);	
}
int sorting_of_odd_place_element(int a[],int n){
	int i,j,k,l;
	printf("\n");
	printf("sorting of odd place element ");
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
			if(i%2==0&&j%2==0&&a[j]<a[i]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
      print_element(a,n);	
}
int sorting_of_even_number(int a[],int n){
		int i,j,k,l;
	printf("\n");
	printf("sorting of even  element ");
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
			if(a[i]%2==0&&a[j]%2==0&&a[j]<a[i]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
      print_element(a,n);
}
int sorting_of_odd_number(int a[],int n){
		int i,j,k,l;
	printf("\n");
	printf("sorting of odd  element ");
	for(i=0;i<n;i++){
		
		for(j=i+1;j<n;j++){
			if(a[i]%2!=0&&a[j]%2!=0&&a[j]<a[i]){
				int m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
      print_element(a,n);
}
int searching_element(int a[],int n){
	int k,i,r;
	printf("\n enter the number you wanted to search in an array:-");
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(k==a[i]);
		r++;
	}
	if(r>0)
	printf("%d is present in the given array",k);
	else { printf("%d is not present in the array",k);
	}
}
 
int main(){
	int n;
	printf("enter the size of an array:-");
	scanf("%d",&n);
	int a[n];
	array_element(a,n);
	insert_in_start(a,n);
	insert_at_last(a,n);
	insert_at_position(a,n);
    sorting_of_even_place_element(a,n);
    sorting_of_odd_place_element(a,n);
    sorting_of_even_number(a,n);
    sorting_of_odd_number(a,n);
    array_sort(a,n);
    searching_element(a,n);
	}

