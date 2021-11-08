#include<stdio.h>
int main(){
    int arr[100],size,i,sum=0;
    
        printf("Enter array of size\n");
        scanf("%d",&size);
        printf("enter array elements");
            for(i=0; i<size; i++){
                scanf("%d",arr[i]);
                for(i=0; i<size; i++){
                    sum=sum+arr[i];
                }
                printf("sum of array =%d\n",sum);
                
            }
}