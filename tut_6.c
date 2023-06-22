#include <stdio.h>
#include <string.h>

int main() {
    // reversing a string
    int j = 0;
    char name[] = "future video";
    char revName[strlen(name) -1];
    printf("%s\n", name);
    for (int i = strlen(name) -1; i >= 0; i--) {
        revName[i] = name[j];
        j++;
    }
    revName[j] = '\0';
    printf("%s", revName);
    printf("\n");
    return 0;
}
