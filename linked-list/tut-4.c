#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};

typedef struct node node_t;

void printList(node_t *head) {
	node_t *temp = head;
	while (temp != NULL) {
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("NULL\n");
}

node_t *create_new_node(int value) {
	node_t *result = malloc(sizeof(node_t));
	result->value = value;
	result->next = NULL;
	return result;
}

int main() {

	node_t *head;
	node_t *tmp;

	tmp = create_new_node(32);
	head = tmp;
	tmp = create_new_node(8);
	tmp->next = head;
	head = tmp;
	tmp = create_new_node(34);
	tmp->next = head;
	head = tmp;

	printList(head);

	return 0;
}
