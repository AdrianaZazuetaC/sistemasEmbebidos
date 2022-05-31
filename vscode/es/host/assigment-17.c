#include <stdio.h>
#include <math.h>

int getdigit(int num, int n)
{
    int r;

    r = num / pow(10, n);

    r = r % 10;

    return r;
}

int setBit(int n, int position)
{
    // kth bit of n is being set
    // by this operation
    return ((1 << position) | n);
}

void main()
{
    int num = 0, pos, n;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    printf("Ingresa una posicion: ");
    scanf("%d", &pos);

    int number = setBit(num, pos);
    printf("%d", number);

    
}