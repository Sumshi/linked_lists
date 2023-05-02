#include <stdio.h>
#include <stdlib.h>

/*Define the structure of a linked list node*/
typedef struct Node {
	int data;          /*The data stored in the node*/
	struct Node *next; /* Pointer to the next node in the list*/
} node_t;

node_t *insertAtBeginning(node_t *head, int data);

/*Function to insert a new node at the beginning of the list*/
node_t *insertAtBeginning(node_t *head, int data) {
	/*Create a new node and set its data element*/
	node_t *newNode = malloc(sizeof(node_t));
	newNode->data = data;

	/*Set the new node's next pointer to the current head*/
	newNode->next = head;

	/*Set the new node as the new head*/
	head = newNode;

	return (head);
}
int main() {
	/*Create an empty linked list*/
	struct Node *head = NULL;

	/*Insert some nodes at the beginning of the list*/
	head = insertAtBeginning(head, 42);
	head = insertAtBeginning(head, 13);
	head = insertAtBeginning(head, 7);

	/*Traverse the list and print its elements*/
	struct Node *current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}
	return 0;
}
