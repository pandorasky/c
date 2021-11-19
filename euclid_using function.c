#include<stdio.h>
int gcd(int a, int b);
void main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
   printf("GCD of number (%d, %d): %d",a,b,gcd(a,b));
}

int gcd(int a, int b){
    int d;
    while(b != 0)
    {
        d= b;
        b = a % b;
        a = d;
    }
    return a;
}
   