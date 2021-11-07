
#include <stdio.h>

int main (){
  int num1;
  int rem1;
  printf ("enter your number");
  scanf ("%d", &num1);
  rem1 = num1 % 2;
  if (rem1 == 0)
    printf ("%d is even", num1);
  else
    printf ("%d is odd", num1);

  return 0;
}
