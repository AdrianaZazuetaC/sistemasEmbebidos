#include <stdio.h>
void function_add_numbers(int a, int b) {
    int sum;
    sum = a+b;
    printf("Resultado de la suma:");
    printf("%d", sum);
    printf("\n");
}

void function_substraction_numbers(int a, int b) {
    int sub;
    sub = a-b;
   printf("Resultado de la resta: ");
   printf("%d", sub);
   printf("\n");
}

void function_multiplication_numbers(int a, int b) {
    int mult;
    mult = a*b;
   printf("Resultado de la multiplicacion: ");
   printf("%d", mult);
   printf("\n");
}

void function_division_numbers(int a, int b) {
    int division;
    division = (a/b);
    printf("Resultado de la division: ");
    printf("%d", division);
    printf("\n");
}