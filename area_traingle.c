#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float a , b , c , s , area;
	
	printf("\nEnter three sides of the triangle : ");
	scanf("%f%f%f", &a, &b, &c);
	s = (a+b+c)/2;
	area = (s*(s-a)*(s-b)*(s-c));
	printf("\nArea : %f", area);
	getch();
	return 0;
}