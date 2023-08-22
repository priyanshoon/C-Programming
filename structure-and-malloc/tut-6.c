#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    char firstName[20];
    char *lastName;
    int age;
    char gender;
};

void PrintEmployee2(struct employee aEmployee);
void PrintEmployee(struct employee *aEmployee);

void TestArray(int a[]);

int main(void) {
    /*** MALLOC AND STRUCTURE ***/

    struct employee aEmployee = {"Priyanshu", "Gupta", 19, 'M'};
    printf("sizeof struct employee is %li bytes\n", sizeof(struct employee));

    struct employee *aEmp = (struct employee *)malloc(sizeof(struct employee));

    // How to access the members of structs

    strcpy(aEmp->firstName, "Priyanshu");
    puts(aEmp->firstName);

    char *string1 = "Gupta";
    aEmp->lastName = "Gupta";

    puts(aEmp->lastName);

    puts("Enter your last name: ");

    aEmp->lastName = (char*)malloc(sizeof(char) * 20);
    scanf("%s", aEmp->lastName);
    puts("Enter your age: ");
    scanf("%d", &(aEmp->age));

    puts(aEmp->lastName);
    printf("Age: %d\n", aEmp->age);

    return 0;
}
