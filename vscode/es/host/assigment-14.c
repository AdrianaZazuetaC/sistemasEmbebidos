#include <stdio.h>


int main() {
  int x;
  int y;

  printf("Por favor, ingresa el valor de x: ");
  scanf("%d", &x);
  printf("Por favor, ingresa el valor de y: ");
  scanf("%d", &y);

  if (x > y) {
       printf("X es la variable mayor: %d", x);
  } else if (y > x) {
       printf("Y es la variable mayor: %d", y);
  } else {
      printf("Las dos variables son iguales");
  }
 

}