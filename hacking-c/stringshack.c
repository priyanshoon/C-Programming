#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
    char name[20];
    char realName[20] = "Priyanshu";
    strcpy(name, argv[1]);
    printf("%d", strcmp(name, realName));
    printf("%s\n", name);
    return 0;
}
