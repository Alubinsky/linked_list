#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

Node *insert_at_head(Node *head, int new_value) {
    Node *new_node = calloc(1, sizeof(Node));
    new_node->value = new_value;

    if (head == NULL) return new_node;
    else {
        new_node->next = head;
        return new_node;
    }
}

Node *insert_at_tail(Node *head, int new_value) {
    Node *new_node = calloc(1, sizeof(Node));
    new_node->value = new_value;

    if (head == NULL) return new_node;
    else {
        Node *current = head;
        while (current->next != NULL) current = current->next;
        current->next = new_node;
        return head;
    }
}

Node *delete_at_head(Node *head) {
    if (head == NULL) return NULL;

    Node *to_return = head->next;
    free(head);
    return to_return;
}

Node *delete_at_tail(Node *head) {
    if (head == NULL) return NULL;
    else if (head->next == NULL) {
        free(head);
        return NULL;
    }
    else {
        Node *current = head;
        Node *prev = NULL;

        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }
        prev->next = NULL;
        free(current);
        return head;
    }
}

int length(Node *head) {
    Node *current = head;
    int length = 0;

    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

int recursive_length(Node *node) {
    if (node == NULL) return 0;
    else return 1 + recursive_length(node->next);
}

bool is_member(Node *node, int find_value) {
    if (node == NULL) return false;
    else if (node->value == find_value) return true;
    else return is_member(node->next, find_value);
}

int count_matches(Node *node, int find_value) {
    if (node == NULL) return 0;
    else if (node->value == find_value)
        return 1 + count_matches(node->next, find_value);
    else return count_matches(node->next, find_value);
}

void print_list(Node *head) {
    Node *current = head;
    int i = 0;

    while (current != NULL) {
        printf("Node: %d = %d\n", i, current->value);
        i++;
        current = current->next;
    }
}

Node *delete_duplicates(Node *head) {
    if (head == NULL) return NULL;

    Node *current = head;

    while (current != NULL && current->next != NULL) {
        Node *check = current->next;
        Node *prev = current;

        while (check != NULL) {
            if (check->value == current->value) {
                Node *temp = check;
                prev->next = check->next;
                check = check->next;
                free(temp);
            }
            else {
                prev = check;
                check = check->next;
            }
        }
        current = current->next;
    }

    return head;
}

Node *append_lists(Node *head1, Node *head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    Node *current = head1;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = head2;
    return head1;
}

Node *sort_list(Node *head) {
    if (head == NULL || head->next == NULL) return head;

    Node *current = head;

    while (current != NULL) {
        Node *min_node = current;
        Node *check = current->next;

        while (check != NULL) {
            if (check->value < min_node->value) {
                min_node = check;
            }
            check = check->next;
        }

        int temp = current->value;
        current->value = min_node->value;
        min_node->value = temp;

        current = current->next;
    }

    return head;
}

void delete_list(Node *head) {
    Node *current = head;

    while (current != NULL) {
        Node *temp = current;
        current = current->next;
        free(temp);
    }
}