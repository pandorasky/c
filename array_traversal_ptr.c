#include<stdio.h>
int main(){
    int arr[6] = {4,5,6,7,8,9};
    int *p;
    p=arr;
   for(int i=0;i<6;i++){
    printf(" %d ",*p++);
   }
}