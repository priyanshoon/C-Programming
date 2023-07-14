#include<stdio.h>
#include <stdlib.h>

void change_value(int*);

int main(int argc, char *argv[]) {
  int x = 10;
  printf("The value of x is: %d\n", x);
  change_value(&x);
  printf("The value of x is: %d\n", x);
  return 0;
}

void change_value(int *p) {
  *p = 15;  // *p = 15 ==> *(&x) = 15 ==> x = 15
}
