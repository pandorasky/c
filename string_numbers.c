#include<stdio.h>
#include <conio.h> 
int main(){
    char str[100];
    int i,num ,flag=0;
    printf("Enter a string\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++){
        num = str[i] - 48;
        flag = flag * 10 + num;
    }
    printf("\nNumber : %d", flag);
	return 0;
}

