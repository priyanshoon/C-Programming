#include <stdio.h>

int main() {
    FILE* frpt;
    frpt = fopen("yooo.txt", "w");
    char str[] = "Yoooooo how you doing!";
    fputs(str, frpt);
    fclose(frpt);
    return 0;
}

