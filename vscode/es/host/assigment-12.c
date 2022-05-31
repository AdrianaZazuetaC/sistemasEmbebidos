#include <stdio.h>


int main() {
   char c = 100;
   printf("Address of c: %p\n", &c);
   char* address1 = (char*) &c;
   char data = *address1;
   
   printf("perform read operation of address1: %d\n", data);
   *address1 = 65;
   printf("second value of c: %d\n", c);
    
    return 0;
}