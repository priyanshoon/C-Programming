#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[50];
};

typedef struct student Student;
typedef Student** StudentPtrPtr;

void PrintName(Student** aPtrPtr);

int main(void) {
    Student aStudent = {"Rounak"};
    Student* sPtr = &aStudent;
    StudentPtrPtr sPtrPtr = &sPtr;

    PrintName(sPtrPtr);

    return 0;
}

void PrintName(StudentPtrPtr aPtrPtr) {
    printf("Name is: %s\n", (*aPtrPtr)->name);
}
