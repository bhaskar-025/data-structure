// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,k,l,temp;
    int a[6]={12,34,23,54,62,24};
    for(i=0;i<6;i++){
       for(j=0;j<6;j++){
            
           if(a[j+1]<a[j]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
           }
       }
}
   
    for(i=0;i<6;i++){
        printf("%d\t",a[i]);
    }

    return 0;
}
