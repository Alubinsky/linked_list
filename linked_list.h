#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdbool.h>

/**
 * Node structure for the linked list
 * @value: integer value stored in the node
 * @next: pointer to the next node in the list
 */
typedef struct node {
    int value;
    struct node *next;
} Node;

/**
 * Insert a value at the head of the list
 * @head: pointer to the head of the list
 * @new_value: value to insert
 * @return: pointer to the new head of the list
 */
Node *insert_at_head(Node *head, int new_value);

/**
 * Insert a value at the tail of the list
 * @head: pointer to the head of the list
 * @new_value: value to insert
 * @return: pointer to the head of the list
 */
Node *insert_at_tail(Node *head, int new_value);

/**
 * Delete the node at the head of the list
 * @head: pointer to the head of the list
 * @return: pointer to the new head of the list
 */
Node *delete_at_head(Node *head);

/**
 * Delete the node at the tail of the list
 * @head: pointer to the head of the list
 * @return: pointer to the head of the list
 */
Node *delete_at_tail(Node *head);

/**
 * Get the length of the list (iterative)
 * @head: pointer to the head of the list
 * @return: number of nodes in the list
 */
int length(Node *head);

/**
 * Get the length of the list (recursive)
 * @node: pointer to the current node
 * @return: number of nodes from this point to the end
 */
int recursive_length(Node *node);

/**
 * Check if a value exists in the list
 * @node: pointer to the head of the list
 * @find_value: value to search for
 * @return: true if found, false otherwise
 */
bool is_member(Node *node, int find_value);

/**
 * Count occurrences of a value in the list
 * @node: pointer to the head of the list
 * @find_value: value to count
 * @return: number of times the value appears
 */
int count_matches(Node *node, int find_value);

/**
 * Print all values in the list
 * @head: pointer to the head of the list
 */
void print_list(Node *head);

/**
 * Delete all duplicate values from the list, keeping first occurrence
 * @head: pointer to the head of the list
 * @return: pointer to the head of the list
 */
Node *delete_duplicates(Node *head);

/**
 * Append list2 to the end of list1
 * @head1: pointer to the head of the first list
 * @head2: pointer to the head of the second list
 * @return: pointer to the head of the combined list
 */
Node *append_lists(Node *head1, Node *head2);

/**
 * Sort the list in ascending order using selection sort
 * @head: pointer to the head of the list
 * @return: pointer to the head of the sorted list
 */
Node *sort_list(Node *head);

/**
 * Delete the entire list and free all allocated memory
 * @head: pointer to the head of the list
 */
void delete_list(Node *head);

#endif