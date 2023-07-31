#include <stdio.h>

int main(int argc, char *argv[]) {
  /*
    int x = 10;
    &x => 200 (& --> address, means address of x)

    int *p = &x; (* --> pointer, mean a pointer p is addressing the address of x "0x004343bmnb232")
    int *p;
    p = &x;
    p => "0x004343bmnb232"

    *p => *(0x004343bmnb232) => x (dereferenceing the variable p)
    *(&x) => x

    *p = 20 ==> *(&x) = 20 ==> x = 20
  */


  int x = 10;
  int *p;
  p = &x;
  printf("the address of x: %p\n", p);
  printf("the address of x: %p\n", &x);
  printf("the value of x: %d\n", x);
  printf("the value of x: %d\n", *p);
  printf("the value of x: %d\n", *(&x));

  *p = 20;
  printf("the value of x: %d\n", x);
  return 0;
}
