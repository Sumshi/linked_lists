#include <stdio.h>
#include <stdlib.h>

// Define the structure of a linked list node
typedef struct Node {
	int data;           // The data stored in the node
	struct Node *next;  // Pointer to the next node in the list
}node_t;

int main() {
	// Create a new linked list node
	node_t *new_node;
	new_node = malloc(sizeof(node_t));

	// Set the node's data
	new_node->data = 42;

	// Set the node's next pointer to NULL
	new_node->next = NULL;

	// Display the node's data
	printf("Node data: %d\n", new_node->data);

	return 0;
}
