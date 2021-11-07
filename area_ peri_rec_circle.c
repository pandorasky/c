
#include<stdio.h>
int main(){
     float pi=3.14;
     float length,breadth,radius,perimeter,area1, area2,circum;
     printf("\nEnter the length  of the rectangle-:",length);
     scanf("%f",&length);
     printf("\nEnter the breadth  of the rectangle-:",breadth);
     scanf("%f",&breadth);
     
     printf("enter the radius of the circle");
     scanf("%f",&radius);
     perimeter=2*(length+breadth);
     area1=length*breadth;
     area2= pi* radius*radius;
     circum =2*pi*radius;
     
     printf(" perimeter of rectangle is%f\n" ,perimeter);
     printf("area of rectangle is %f\n",area1);
     printf("area of circle is %f\n",area2);
     printf("circumference of a circle is %f\n",circum);
     return 0;
}