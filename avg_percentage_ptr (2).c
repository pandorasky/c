#include<stdio.h>  
void calc(int, int, int, int*, float*, float*, float*);  
    int main(){  
    float a, b, c, total = 0, avg = 0, percent = 0;  
    int obtained; 
    printf("Enter marks obtained in 3 subjects\n");  
    scanf("%f%f%f", &a, &b, &c);  
  
    printf("What's the total marks of 3 subjects combined");  
    scanf("%d", &obtained); 
    calc(a, b, c, &obtained, &total, &avg, &percent);  
    printf("\nTotal Marks Obtained = %0.2f\n", total);  
    printf("Average = %0.2f\n", avg);  
    printf("Percentage = %0.2f\n", percent);  
    return 0;  
}  
void calc(int x, int y, int z, int *obtained,float *tot, float *avg, float *per){  
    *tot = x + y + z;  
    *avg = *tot / 3.0;  
  
    *per = *tot * 100.0 / (float)*obtained;  
}  