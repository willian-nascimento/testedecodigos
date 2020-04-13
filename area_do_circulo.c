#include <stdio.h>

float area (float raio);

int main (void ) {

   float x;

   printf("Digite o raio (m): ");
   scanf("%f", &x);

   printf("\nArea do circulo: %.2f m².\n", area(x));
   
   return 0;

}

float area (float raio) {

   float pi = 3.14159;
   
   return pi * (raio * raio);

}
