//Twenty-five numbers are entered from the keyboard into an array.
//e number to be searched is entered through the keyboard by the
//user. Write a program to find if the number to be searched is
//present in the array and if it is present, display the number of times
//it appears in the array.
#include<stdio.h>
#include<conio.h>
int main(){
	int arr[5], a, i, count = 0;
	printf("Enter number : ");
	for (i = 0; i<5; i++){
		
		scanf("%d", &arr[i]);
	}
	printf("\n\nEnter the number you want to search : ");
	scanf("%d", &a);
	for (i = 0; i<5; i++){
		if (arr[i] == a){
		    count++;
		}
    printf("%d is present %d times\n",a,count );		
	}
	
}