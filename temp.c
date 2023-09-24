#include <stdio.h>
#include <unistd.h>
#include <string.h>

int foo() {
	return 42;
}

int main() {
	int nb;
	nb = 13;
	printf("%p, %p\n", foo);
	sleep(100);
	return 0;
}
