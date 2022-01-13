#include <stdio.h>
int main(){
    char str[100];
    int Lower, Upper;
    int counter;
    Lower = Upper = 0;

    printf("enter a string>-:");
    gets(str);

    for (counter = 0; str[counter] != NULL; counter++) {

        if (str[counter] >= 'A' && str[counter] <= 'Z')
            Upper++;
        else if (str[counter] >= 'a' && str[counter] <= 'z')
            Lower++;
    }

    printf(" %d \n %d ", Upper,Lower);

    return 0;
}