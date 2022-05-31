#include <stdio.h>


int main() {
  int age;

  printf("Enter your age: ");
  scanf("%d", &age);

  if (age >= 18) {
       printf("Your allow to vote");
  } else {
      printf("Your dont have the proper age to vote");
  }
 

}