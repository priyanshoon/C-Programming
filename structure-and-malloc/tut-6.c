#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char firstName[20];
    char lastName[20];
    int age;
    char gender;
};

void PrintEmployee2(struct employee aEmployee);
void PrintEmployee2(struct employee *aEmployee);

void TestArray(int a[]);

int main(void) {

    return 0;
}
