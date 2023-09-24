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

	insert(&root, 'f');
	insert(&root, 'g');
	insert(&root, 'h');

	/*
	   Node* second = (Node*)malloc(sizeof(Node));

	   second->data = 'a';
	   second->nxtNode = NULL;

	   root->nxtNode = second;
	   */
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

void insert(Node **sPtr, char value) {
	Node *newPtr;
	Node *previousPtr;
	Node *currentPtr;

	newPtr = (Node*)malloc(sizeof(Node));

	if (newPtr != NULL) {
		newPtr->data = value;
		newPtr->nxtNode = NULL;

		previousPtr = NULL;
		currentPtr = *sPtr;

		while (currentPtr != NULL) {
			previousPtr = currentPtr;
			currentPtr = currentPtr->nxtNode;
		}

		previousPtr->nxtNode = newPtr;

	} else {
		printf("%c is not inserted. No memory available\n", value);
	}
}
