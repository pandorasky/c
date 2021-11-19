#include<stdio.h>
#include<math.h>
int fact(int q,int a){
    int i,fact=1;
    
    for(i=1; i<=a; i++){
        fact=fact*i;
    }
    
     return fact;
  } 
  int main(){
      float x=6;
      int num =10, sign = -1;
      float sum=0,p=3;
      for(int i=0; i<num; i++){
          sum = sum + (pow(x,p)/fact(p,num))*sign;
          sum -x;
          sign= -sign;
          p=p+2;
      }
      printf("%f",sum );
       return 0;
  }
      
  
