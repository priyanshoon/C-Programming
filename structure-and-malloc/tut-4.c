#include <stdio.h>
#include <stdlib.h>

void testArray(int a[]);

int main(void) {
    int *aPtr = (int*)malloc(sizeof(int) * 10);
    char *cPtr = (char*)malloc(sizeof(char) * 80);

    if (aPtr == NULL) {
        return 1;
    }

//    size_t i;

    // for (i = 0; i < 10; i++) {
    //     aPtr[i] = 0;
    //     printf("%p -- %d\n", &aPtr[i], aPtr[i]);
    // }

    puts("");
    free(aPtr);

 //   int notMalloc = 99;
 //   free(notMalloc);

    /*** CALLOC ***/
    // We use calloc for declearing arrays, much better
    // Why? it initializes each element to zero, malloc doesnt do that

    int arraySize = 10;

    int *arrayPtr = (int*)calloc(arraySize, arraySize * sizeof(int));
    size_t i;

//    for (i = 0; i < arraySize; i++) {
//        aPtr[i] = 0;
//        printf("%p -- %d\n", &arrayPtr[i], arrayPtr[i]);
//    }
//    puts("");

   // for (i = 0; i < arraySize; i++) {
   //     printf("%p -- %d\n", arrayPtr, *arrayPtr);
   //     arrayPtr++;
   // }
   // printf("%p\n", arrayPtr);

    free(arrayPtr);

    int array1[] = {1, 2, 3, 4, 5};
    int *array2 = (int*)malloc(sizeof(int)*5);

    printf("The size of the array : %li\n", sizeof(array1));

    testArray(array2);

    return 0;
}

void testArray(int a[]) {
    printf("%li\n", sizeof(a));
}
