// Program to do various linked list exercises
// Written by Joanna, November 2022

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(void) {
    struct node *head = insert(NULL, 1, 0);
    head = insert(head, 5, 1);
    head = insert(head, 4, 1);
    head = insert(head, 3, 0);
    head = insert(head, 1, 3);
    head = insert(head, 9, 10);

    // The list should be
    // 3 -> 1 -> 4 -> 1 -> 5 -> 9 -> X
    print_list(head);

    struct node *head_copy = copy(head);

    print_list_with_addresses(head);
    print_list_with_addresses(head_copy);

    free_list(head);
    free_list(head_copy);
    return 0;
}

/** PRESCRIBED FUNCTIONS **/
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

struct node *copy(struct node *list) {
    struct node *copy_head = NULL;
    struct node *copy_curr = NULL;
    struct node *curr = list;
    while (curr != NULL) {
        struct node *clone = create_node(curr->data);
        if (copy_head == NULL) {
            copy_head = clone;
        } else {
            copy_curr->next = clone;
        }
        copy_curr = clone;
        curr = curr->next;
    }
    return copy_head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}

void print_list_with_addresses(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d (%p) -> ", curr->data, curr);
        curr = curr->next;
    }
    printf("X\n");
}

struct node *create_node(int data) {
    struct node *new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void free_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        struct node *del_node = curr;
        curr = curr->next;
        free(del_node);
    }
}
