// Program to print the relation between 2 numbers as equal to, less than or greater than

#include <stdio.h>

int main() {
   int a, b;

    printf("Enter value for A :");
    scanf("%d", &a);
    printf("Enter value for B :");
    scanf("%d", &b);

    if(a > b)
      printf("a is greater than b");

    else if (a == b)
      printf("a is equal to b");

    else if (a < b)
     printf("a is less than b");

   return 0;
}