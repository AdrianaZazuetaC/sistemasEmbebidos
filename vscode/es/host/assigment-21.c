#include <stdio.h>
int main() {
   int i, j;
   int start = 1;
   int end = 10;
 
   for (i = start; i <= end; i++) {

      for (j = i; j >= start; j--) {
         printf("%d ", j);
      }
      printf("\n");
   }
   return 0;
}
