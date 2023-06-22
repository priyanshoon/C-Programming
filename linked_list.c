#include <stdio.h>
#include <math.h>

struct node {
    int value;
    struct node* next;
};

typedef struct node node_t;

int main() {
    printf("--------  Linked List in C  ---------\n");
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value = 32;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    return 0;
}

