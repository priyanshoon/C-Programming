#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct charNode {
    char data;
    struct charNode *nxtNode;
};

typedef struct charNode Node;

void printList(Node *currentPtr);
void insert(Node **sPtr, char value);
void delete(Node **sPtr, char value);

int main(void) {
    Node* root = (Node*)malloc(sizeof(Node));

    root->data = 'c';
    root->nxtNode = NULL;

    Node* second = (Node*)malloc(sizeof(Node));

    second->data = 'a';
    second->nxtNode = NULL;

    root->nxtNode = second;

    printList(root);

    return 0;
}

void printList(Node *currentPtr) {
    if (currentPtr == NULL) {
        printf("The list is empty\n");
    } else {
        printf("The list is: \n");

        while (currentPtr != NULL) {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nxtNode;
        }

        printf("NULL\n");
    }
}
