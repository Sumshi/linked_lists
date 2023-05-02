#include <stdio.h>
#include <stdlib.h>

/*Define the structure of a linked list node*/
typedef struct Node {
	int data;           /*the data stored in the node*/
	struct Node *next;  /*Pointer to the next node in the list*/
}node_t;

/*function to insert a new node at the end of the list*/
node_t *insertAtEnd(node_t *head, int data) {
	/*Create a new node and set its data element*/
	node_t *newNode;
	node_t *currentNode;

	newNode = malloc(sizeof(node_t));
	if (newNode == NULL)
	{
		return NULL;/*allocation failed*/
	}
	newNode->data = data;
	newNode->next = NULL;

	/*If the list is empty, set the new node as the head*/
	if (head == NULL) {
		head = newNode;
		return head;
	}

	/*if not empty Traverse the list to find the last node*/
	*currentNode = head;
	while (currentNode->next != NULL) {
		currentNode = currentNode->next;
	}

	/*Set the new node as the last node's next pointer*/
	currentNode->next = newNode;

	return head;
}

int main() {
	// Create an empty linked list
	struct Node *head = NULL;

	// Insert some nodes at the end of the list
	head = insertAtEnd(head, 42);
	head = insertAtEnd(head, 13);
	head = insertAtEnd(head, 7);

	// Traverse the list and print its elements
	struct Node *current = head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}

	return 0;
}
