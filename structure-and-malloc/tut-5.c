#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int array1[5] = {1, 2, 3, 4, 5};
    int *aPtr = &array1[0];

    for (size_t i = 0; i < 5; i++) {
        printf("The memory address: %p\t value is: %d\n", aPtr, *aPtr);
        aPtr++;
        // How does this work? Memory Address + (number * it's byte value)
        // Memory is reserved in 4-byte block
        // aPtr++ is the same as - aPtr += 1 * 4;

        // aPtr += 2; // What's the result?
        // aPtr += 4; // What's the result?
    }
    return 0;
}
