#include <stdio.h>
#include <stdlib.h>

int CubeByValue(int intValue) {
    intValue = intValue * intValue * intValue;
    return intValue;
}

void CubeByRef(int *aPtr) {
    *aPtr = *aPtr * *aPtr * *aPtr;
}

int main(int argc, char *argv[]) {
    int b = 3;

    printf("Cube by value: %d\n", CubeByValue(b));
    printf("Value of b: %d\n", b);
    CubeByRef(&b);
    printf("Cube by reference: %d\n", b);
    printf("Value of b: %d\n", b);

    return 0;
}
