#include <stdio.h>

struct myStructure {
    int myNum;
    char myLetter;
};

int main() {
    // Create a structure variable of myStructure called s1
    struct myStructure s1;

    s1.myNum = 18;
    s1.myLetter = 'B';

    return 0;
}
