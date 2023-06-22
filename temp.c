#include<stdio.h>
#include <string.h>

void print_char_only(char arr[]) {
  for (int i = 0; i <= strlen(arr); i++) {
    printf("%c ", arr[i]);
  }
}

void print_words_only(char arr[]) {
  char * words = strtok(arr, " ");
  while (words != NULL) {
    printf("[%s] ", words);
    words = strtok(NULL, " ");
  }
}

void whole_fucking_sentence(char arr[]) {
  for (int i = 0; i <= strlen(arr); i++) {
    printf("%c", arr[i]);
  }
}

int main() {
  /*
   wap in c to print a char in first line a word in 2nd line and sentence in 3 rd line
  */
  char arr[] = "Hello World!";

  print_char_only(arr);
  printf("\n");
  print_words_only(arr);
  printf("\n");
  whole_fucking_sentence(arr);

  return 0;
}
