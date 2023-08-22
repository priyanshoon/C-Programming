#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *iPtr = (int*)malloc(sizeof(int));

	// int *iPtr = malloc(sizeof(int));

    char *cPtr = (char*)malloc(sizeof(char));

    if (iPtr == NULL) {
        return 1;
    }

	*iPtr = 99;

	printf("The value of iPtr is : %d\n", *iPtr);
    free(iPtr);

	return 0;
}
