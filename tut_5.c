#include<stdio.h>

int main() {
    // char  ---> 255
    // short ---> 65535
    // int   ---> 4 bytes
    // long  ---> 4 bytes
    // long long  ---> 8 bytes
    // unsigned int  --->  0....4 billion approx
    // signed int  ---> (-)ve 2 billion approx......(+)ve 2 billion approx
    int v[5] = {1, 2, 4, 5, 6};

    printf("v[0] = %d\n", v[0]);
    return 0;
}
