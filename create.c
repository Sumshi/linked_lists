#include <stdio.h>
#include <stdlib.h>

// Define the structure of a linked list node
struct Node {
	int data;           // The data stored in the node
	struct Node *next;  // Pointer to the next node in the list
};

int main() {
	// Create a new linked list node
	struct Node *node = (struct Node*) malloc(sizeof(struct Node));

	// Set the node's data
	node->data = 42;

	// Set the node's next pointer to NULL
	node->next = NULL;

	// Display the node's data
	printf("Node data: %d\n", node->data);

	return 0;
}
