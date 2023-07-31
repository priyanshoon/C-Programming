#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int integer1 = 7;
//    printf("value store in variable: %d\n", integer1);
//    printf("Variable stored in memory address: %p\n", &integer1);
//    printf("Variable stored in memory address: %p\n", firstptr);
    int *firstPtr = NULL; 
   // int * intPtr, integer2;

    /*
     * int * firstPtr;
     * int* firstPtr;
     * int *firstPtr;
     * these above three lines are same thing
     */

   // float *floatPtr; // -----> pointer gonna pointing float value
    //int *secondPtr = NULL;
    //printf("the valur is: %p\n", secondPtr);
    //secondPtr = 0; // NULL and 0 does the same thing
    //printf("the valur is: %p\n", secondPtr); 

    firstPtr = &integer1;
//    printf("the memory address of integer is: %p\n", firstPtr);
//    printf("the memory address of firstPtr is: %p\n", &firstPtr);

    //printf("Dereferenced valus of firstPtr: %d\n", *firstPtr);
    //printf("The square is : %d\n", *firstPtr * *firstPtr);

    *firstPtr = 999;
    printf("value store in variable: %d\n", integer1); 

    return 0;
}
