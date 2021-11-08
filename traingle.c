#include <stdio.h>
void
main ()
{
  int ang1;
  int ang2;
  int ang3;
  int sum;
  printf ("enter three angles of traingle");
  scanf ("%d %d %d", &ang1, &ang2, &ang3);
  sum = ang1 + ang2 + ang3;
  if (sum == 180)
    printf ("the traingle is valid");
  else
    printf ("the traingle is not valid ");
}
