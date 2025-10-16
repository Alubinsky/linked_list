#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void display_menu(void);

int main(void) {
    Node *list = NULL;
    int choice, value, count;
    
    printf("=== Linked List Interactive Menu ===\n\n");
    
    while (1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to insert at head: ");
                scanf("%d", &value);
                list = insert_at_head(list, value);
                printf("Value %d inserted at head.\n\n", value);
                break;
                
            case 2:
                printf("Enter value to insert at tail: ");
                scanf("%d", &value);
                list = insert_at_tail(list, value);
                printf("Value %d inserted at tail.\n\n", value);
                break;
                
            case 3:
                if (list == NULL) {
                    printf("List is empty. Nothing to delete.\n\n");
                } else {
                    printf("Deleted head node.\n\n");
                    list = delete_at_head(list);
                }
                break;
                
            case 4:
                if (list == NULL) {
                    printf("List is empty. Nothing to delete.\n\n");
                } else {
                    printf("Deleted tail node.\n\n");
                    list = delete_at_tail(list);
                }
                break;
                
            case 5:
                if (list == NULL) {
                    printf("List is empty.\n\n");
                } else {
                    printf("\n--- Current List ---\n");
                    print_list(list);
                    printf("\n");
                }
                break;
                
            case 6:
                if (list == NULL) {
                    printf("List is empty. Length: 0\n\n");
                } else {
                    printf("List length: %d\n\n", length(list));
                }
                break;
                
            case 7:
                printf("Enter value to search: ");
                scanf("%d", &value);
                if (is_member(list, value)) {
                    printf("Value %d found in list.\n\n", value);
                } else {
                    printf("Value %d not found in list.\n\n", value);
                }
                break;
                
            case 8:
                printf("Enter value to count: ");
                scanf("%d", &value);
                count = count_matches(list, value);
                printf("Value %d appears %d time(s) in the list.\n\n", value, count);
                break;
                
            case 9:
                if (list == NULL) {
                    printf("List is empty. Nothing to sort.\n\n");
                } else {
                    list = sort_list(list);
                    printf("List sorted in ascending order.\n\n");
                }
                break;
                
            case 10:
                if (list == NULL) {
                    printf("List is empty. Nothing to clean.\n\n");
                } else {
                    list = delete_duplicates(list);
                    printf("Duplicates removed.\n\n");
                }
                break;
                
            case 11:
                if (list == NULL) {
                    printf("List is empty.\n\n");
                } else {
                    delete_list(list);
                    list = NULL;
                    printf("List cleared. All memory freed.\n\n");
                }
                break;
                
            case 12:
                printf("Exiting program. Cleaning up...\n");
                delete_list(list);
                return 0;
                
            default:
                printf("Invalid choice. Please try again.\n\n");
        }
    }
    
    return 0;
}

void display_menu(void) {
    printf("================================\n");
    printf("   LINKED LIST OPERATIONS\n");
    printf("================================\n");
    printf("1.  Insert at head\n");
    printf("2.  Insert at tail\n");
    printf("3.  Delete at head\n");
    printf("4.  Delete at tail\n");
    printf("5.  Display list\n");
    printf("6.  Get list length\n");
    printf("7.  Search for value\n");
    printf("8.  Count value occurrences\n");
    printf("9.  Sort list (ascending)\n");
    printf("10. Remove duplicates\n");
    printf("11. Clear entire list\n");
    printf("12. Exit program\n");
    printf("================================\n");
}