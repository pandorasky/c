#include<stdio.h>
int main(){
     int arr1[20],arr2[20],i,num;
     printf("Enter the number of elements");
     scanf("%d",&num);
     
     printf("Enter the array of the elements");
       for (i = 0; i < num; i++) {
        scanf("%d",&arr1[i]);
       } 
     for(i=0; i<num; i++){
        arr2[i] = arr1[i];
     }  
      printf("the copied array is");
      for(i=0; i<num; i++)
          
      printf("\narr2[%d] = %d", i, arr2[i]);
      return 0;
}