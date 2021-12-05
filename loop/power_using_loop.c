
#include<stdio.h>
 int main(){
     int x,y;
     int multi=1;
     printf("Enter your first number->");
     scanf("%d",&x);
     printf("enter your second number->");
     scanf("%d",&y);
    
     for (int i=0; i<y; i++){
         multi = multi*x;
     }
     printf ("%d %d = %d",x,y,multi);
     }
