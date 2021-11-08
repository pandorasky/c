#include<stdio.h>
void
main ()
{
  int num1;
  int num2;
  int num3;
  int sum;
  printf ("enter number one");
  scanf ("%d", &num1);
  printf ("enter number two");
  scanf ("%d", &num2);
  printf ("enter number three");
  scanf ("%d", &num3);
  sum = num1 + num2 + num3;
  if (sum > 100)
    printf ("invalid");
  else
    printf ("valid");
}
