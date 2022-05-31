#include <stdio.h>


int main() {
  int x;
  int tax1 = 0;
  float tax2 = 0.12;
  float tax3 = 0.22;
  float tax4 = 0.32;
  float rate;

   printf("Por favor, ingresa el valor de x: ");
  scanf("%d", &x);

  if (x <= 9525) {
       printf("El impuesto es: %d", (x * (tax1 / 100)));
  } else if (x >= 9526 || x <= 38701) {
       rate = (float)tax2/100;
      printf("El impuesto es: %f", (float)x*rate);
  } else if (x >= 38701 || x <= 82500) {
      rate = (float)tax3/100;
      printf("El impuesto es: %f", (float)x*rate);
  } else if (x > 82500) {
      rate = ((float)tax4/100) + 1000;
      printf("El impuesto es: %f", ((float)x*rate));
  }
 

}