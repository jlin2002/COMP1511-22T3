// A basic demo of linked lists
// Joanna Lin, October 2022

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *create_node(int data);
struct node *append(struct node *head, int data);
struct node *insert(struct node *head, int data, int position);
void print_list(struct node *head);

int main(void) {
    struct node *head = create_node(1);
    print_list(head);
    head = append(head, 1);
    print_list(head);
    head = append(head, 2);
    print_list(head);
    head = insert(head, 3, 0);
    print_list(head);
    head = insert(head, 4, 2);
    print_list(head);
    head = insert(head, 5, 4);
    print_list(head);
    head = insert(head, 6, 10);
    print_list(head);
    return 0;
}

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

struct node *append(struct node *head, int data) {
    struct node *new_node = create_node(data);
    if (head == NULL) {
        return new_node;
    }

    struct node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = new_node;
    return head;
}

struct node *insert(struct node *head, int data, int position) {
    struct node *new_node = create_node(data);
    // Account for edge cases first
    if (position <= 0 || head == NULL) {
        new_node->next = head;
        return new_node;
    }

    struct node *current = head;
    // We must not loop past the end of the list!
    int i = 0;
    while (current->next != NULL && i < position - 1) {
        current = current->next;
        i++;
    }

    new_node->next = current->next;
    current->next = new_node;
    return head;
}

void print_list(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
