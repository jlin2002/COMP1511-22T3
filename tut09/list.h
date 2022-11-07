// Emily Chen & Tom Kunc
// Defines a linked list and basic functions to debug it

struct node {
	int data;		        // data item at this node
	struct node *next;		// pointer to the next node
};


// Append to a linked list
struct node *insert(struct node *head, int data, int position);

// Returns a copy of the linked list and frees the original list.
struct node *copy(struct node *head);

// Prints the data of a linked list
void print_list(struct node *head);

// Prints the data of a linked list alongside the node address
void print_list_with_addresses(struct node *head);

// Frees all the elements in a linked list
void free_list(struct node *head);

struct node *create_node(int data);
