#include <stdio.h>
#include <stdlib.h>

int* return_me(int*, int*);

int main(int argc, char *argv[]) {
    int x = 10;
    int *p = &x;
    printf("P: %p\n", p);

    printf("P: %p\n", p);
    return 0;
}

int* return_me(int *pint1, int *pint2) {
    return NULL;
}
