#include <stdio.h>
int main() {
   int i, j, n, num;
   printf("Enter the number of rows: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++) {
      num = 1;
      for (j = i; j <= n; j++) {
         printf("%d ", num++);
         
      }
      printf("\n");
   }
   return 0;
}