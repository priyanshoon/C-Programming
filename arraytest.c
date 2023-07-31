#include <stdio.h>
#include <stdlib.h>

struct Person {
    char name[];
    int age;
    char occupation[];
};

int main(int argc, char **argv) {
    int a[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}
