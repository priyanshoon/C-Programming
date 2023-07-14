#include <stdio.h>

int* return_me(int*);

int main(int argc, char *argv[]) {
  int x = 10;
  int *p = &x;
  printf("P: %p\n", p);

  p = return_me(p);
  printf("P: %p\n", p);
  return 0;
}

int* return_me(int *pint) {
  return pint;
}
