#include <stdio.h>
#include <string.h>

int palindromCheck(char c[]) {
    int j = 0;
    char revC[strlen(c) - 1];
    printf("%s\n", c);
    for (int i = strlen(c) - 1; i >= 0; i--) {
        revC[i] = c[j];
        j++;
    }
    revC[j] = '\0';
    printf("%s\n", revC);

    if (strcmp(revC, c)) {
        return 1;
    } else {
        return 0;
    }
}

int main(int argc, char **argv) {
    if (palindromCheck(argv[1]) == 0) {
        printf("Palindrom!\n");
    } else {
        printf("Non Palindrom\n");
    }
    //printf("%d", revString("Hello"));
    return 0;
}
