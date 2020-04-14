#include <stdio.h>
#define VETOR 10

int main () {

   int a[VETOR] = {1, 2, 5, 4, 3, 8, 19, 22, 23, 24};
   int i;

   for (i = 0; i < VETOR; i++) {
      a[i] /= 2;
   }
  
   for (i = 0; i < VETOR; i++) {
      printf("%d\n", a[i]);
   }

   return 0;
}
