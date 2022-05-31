#include <stdio.h>

void main() {
    int x = 1;
    int eventNumber = 0;
    int limit;

    printf("Ingresa un numero limite: ");
    scanf("%d", &limit);
    while(x <= limit) {
       

        if(x % 2 == 0) {
            printf("%d\n", x);
            eventNumber ++;
        }
        
        x++;
    }

    printf("Total of event number %d", eventNumber);
}