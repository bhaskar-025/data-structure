# include <stdio.h>
int print_element(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
int merge(int a[],int l,int mid,int h){
	int n1=mid-l+1;
	int n2=h-mid;
	int i,j,k=l;
	int left_array[n1];
	int right_array[n2];
	for(i=0;i<n1;i++){
		left_array[i]=a[l+i];
	}
	for(i=0;i<n2;i++){
		right_array[i]=a[mid+1+i];
	}
	i=0;
	j=0;
	while(i<n1&&j<n2){
		if(left_array[i]<=right_array[j]){
			a[k]=left_array[i];
			i++;
			
		}
		
		else{
			a[k]=right_array[j];
			j++;
			
		}
		k++;
	}
	while(i<n1){
		a[k]=left_array[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=right_array[j];
		j++;
		k++;
	}
	
}
int divide(int a[],int l,int h){
	if(l<h){
	int mid=(l+h)/2;
	divide(a,l,mid);
	divide(a,mid+1,h);
	merge(a,l,mid,h);
	}
}
int main(){
	int a[]={45,12,3,23,41,19,39};
	int n=sizeof(a)/sizeof(a[0]);
    divide(a,0,n-1);
    print_element(a,n);
}

