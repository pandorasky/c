#include<stdio.h>
#include<math.h>
void calculate( int ,int,int,int,int,int*,float*);
int main(){
    int a,b,c,d,e,sum=0;
    float avg;
    printf("enter your five values");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    calculate( a,b,c,d,e,&sum ,&avg);
    printf("\nsum = %d ",sum);
    printf("\naverage = %f",avg);
    return 0;
}
   void calculate(int a,int b,int c,int d,int e,int* sum,float *avg){
    *sum = *sum+a+b+c+d+e;
    *avg = *sum/5.0;
   } 
   
  