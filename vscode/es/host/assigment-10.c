
/* 
Asignacion 10 - Escribir un programa que tome 3 numeros del usuario e imprima el promedio
*/

#include<stdio.h>

int main(void){
  int numero, suma = 0, total = 0, i;

  printf("Ingresa 3 numeros:\n");
  for(i = 1; i <= 3; i++){
    printf("%d: ", i);
    scanf("%d",&numero);
    suma = suma + numero;
  }
  total = suma / 3;
  
  printf("El promedio es %d", total);

return 0;
}