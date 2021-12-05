//Write a program that prompts the user to input a positive integer. It should then output a message indicating whether the number is a prime number. 
//Show the answer.
#include<stdio.h>
int  main(){
    int i, num=i,flag=1;
    printf("enter your number\n");
    scanf("%d",&num);
    for(int i=2; i<num; i++){
        if(num%i==0){
            flag= 0;
            break;
        }
}
    if (flag == 1 && num != 1){
        printf(" The number is prime");
    }
    else{
        printf("The number  is not prime");
    }

    return 0;
}

