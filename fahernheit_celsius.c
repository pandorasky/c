#include<stdio.h>
int main(){
    float temp,centigrade ;
    printf("Enter  your temperature in Fahrenheit",temp);
    scanf("%f",&temp);
    temp =  temp - 32 * 5/9;
    printf("temperature of a city is %f",temp);
}