//Write a program that reads a set of integers, and then prints the sum of the even and odd integers.
//Show the answer.
#include <stdio.h>
 
void main(){
    int i, num;
    int odd_sum = 0;
    int even_sum = 0;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        if (i % 2 == 0)
            even_sum = even_sum + i;
        else
            odd_sum = odd_sum + i;
    }
    printf("Sum of all odd numbers  = %d\n", odd_sum);
    printf("Sum of all even numbers = %d\n", even_sum);
}
