#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

	// ---- sizeof ----
/*
	printf("sizeof INT:\t%li bytes\n", sizeof(int));
	printf("sizeof FLOAT:\t%li bytes\n", sizeof(float));
	printf("sizeof DOUBLE:\t%li bytes\n", sizeof(double));
	printf("sizeof CHAR:\t%li bytes\n", sizeof(char));

	int i = 9999999;

	printf("Size of i:\t%li\n", sizeof(i));
*/
	void *aPtr = {0};

	int a = 44;
	char b = 'f';
	int array[40] = {0};

	aPtr = &a;
	// aPtr = &b;
	// aPtr = array1;

	printf("The value of a: %p\n", ((int*)aPtr));

	return 0;
}
