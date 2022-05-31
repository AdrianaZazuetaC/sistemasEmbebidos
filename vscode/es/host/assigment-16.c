#include <stdio.h>


int main() {
    char x;
    
    int b = 0;
    int a = 0;
    int h = 0;
    float resultado;
   printf("Por favor, ingresa el valor de la figura a calcular: ");
   scanf("%c", &x);

  switch (x) {
    case 't':
        printf("Ingresar base: ");
        scanf("%d", &b);
        printf("Ingresar altura: ");
        scanf("%d", &a);
        resultado = (b*a)/2;
        printf("Resultado: %f", resultado);
      break;

    case 'z':

        printf("Ingresar base1: ");
        scanf("%d", &b);
        printf("Ingresar base 2: ");
        scanf("%d", &a);
        printf("Ingresar altura: ");
        scanf("%d", &h);
        resultado = ((b+a)/2)*h;
        printf("Resultado: %f", resultado);
      break;
  }
 
 return 0;
}