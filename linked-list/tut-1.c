#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// create a structure
struct file {
    char name[20];
    char date[20];
    char mode;
};

// create a typedef
typedef struct file File;
typedef File* FilePtr;

int main(void) {
    // declear Variable
    struct file aFile = {"file1.c", "1900", 'F'};
    File aFile2 = {"file2.c"};

    struct file* aFilePtr = (struct file*)malloc(sizeof(struct file));
    strcpy(aFilePtr->name, "file3.c");

    //print members
    puts(aFile.name);
    puts(aFile2.name);
    puts(aFilePtr->name);

    return 0;
}
