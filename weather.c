#include<stdio.h>
void
main ()
{
  int temp;
  printf ("enter your temperature ");
  scanf ("%d", &temp);
  if (temp < 0)
    printf ("freezing weather");
  else if (temp < 0 > 10)
    printf ("very cold weather");
  else if (temp < 10 > 20)
    printf ("cold weather");
  else if (temp < 20 > 30)
    printf ("normal temp");
  else if (temp < 30 > 40)
    printf ("hot weather");
  if (temp >= 40)
    printf ("very hot");
}
