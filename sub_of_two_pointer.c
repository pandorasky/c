#include<stdio.h>
int main(){
int i = 4, *j, *k ;
j = &i ;
printf("%u ",j);
j = j - 2 ;
printf("%u ",j);
j = j - 5 ;
printf("%u ",j);
k = j - 6 ;
printf("%u ",k);
}