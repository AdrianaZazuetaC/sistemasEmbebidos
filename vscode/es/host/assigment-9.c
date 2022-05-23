#include <stdio.h>

long long myLongHistory = 900;
unsigned long size = sizeof(myLongHistory);

int main() {
    printf("Size of char data type \t\t= %lu\n",sizeof(char));
    printf("Size of short data type \t= %lu\n",sizeof(short));
    printf("Size of int data type \t\t= %lu\n",sizeof(int));
    printf("Size of long data type \t\t= %lu\n",sizeof(long));
    printf("Size of long long data type \t= %lu\n",size);

    return 0;
}