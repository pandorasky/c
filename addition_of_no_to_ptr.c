#include<stdio.h>
int main(){
int i = 4, *j, *k ;
j = &i ;
printf("%u ",j);
j = j + 1 ;
printf("%u ",j);
j = j + 9 ;
printf("%u ",j);
k = j + 3 ;
printf("%u ",k);
}