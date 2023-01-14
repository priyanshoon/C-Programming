#include <stdio.h>
#include <string.h>

/*
struct myStructure {
    int myNum;
    char myLetter;
};
*/

struct employee
{
    int id;
    char name[24];
};

int main() {
    // Create a structure variable of myStructure called s1
    //    struct myStructure s1;

    //s1.myNum = 18;
    //  s1.myLetter = 'B';
    
    struct employee e1, e2;
    e1.id = 1;
    e2.id = 2;
    strcpy(e1.name, "Priyanshu");
    strcpy(e2.name, "Rounak");

    printf("First employee name is %s and his id is %d \n", e1.name, e1.id);
    printf("Second employee name is %s and his id is %d \n", e2.name, e2.id);


    return 0;
}
