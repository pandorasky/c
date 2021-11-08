#include <stdio.h>
void
main ()
{
  int vote_age;
  printf ("enter the age of the candidate");
  scanf ("%d", &vote_age);
  if (vote_age < 18)
    printf (" You are not eligible to caste your vote.\n");
  else if (vote_age <= 18)
    printf ("You would be able to caste your vote after year.\n");
  else
    printf (" You are eligible for casting your vote.\n");
}
