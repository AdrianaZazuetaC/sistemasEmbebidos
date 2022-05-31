#include <stdio.h>
#include <math.h>

int clearBit(int n, int position)
{
   
    return (n & (~(1 << (position - 1))));
}

void main()
{
    int num = 0, pos, n;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    printf("Ingresa una posicion: ");
    scanf("%d", &pos);

    int number = clearBit(num, pos);
    printf("%d", number);

    
}