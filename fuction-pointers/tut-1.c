#include <stdio.h>
#include <stdlib.h>

typedef int (*operation_ptr)(int, int);

int add(int a, int b) {
	return a + b;
}

int mult(int a, int b) {
	return a * b;
}

int do_operation(operation_ptr op, int x, int y) {
	return op(x, y);
}

int main (int argc, char **argv) {
	int result = do_operation(add, 5, 5);
	int result1 = do_operation(mult, 5, 5);

	printf("%d --addition %d --multiplication \n", result, result1);
	return 0;
}
