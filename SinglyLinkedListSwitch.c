#include<stdio.h>
#include<stdlib.h>

// Define the structure of a node in the linked list
struct node {
    int data;          // Store the data in the node
    struct node *link; // Pointer to the next node
};

struct node *head = NULL; // Initialize the head of the linked list as NULL

int main() {
    int choice, d, key;          // Variables for menu choice, data input, and search key
    struct node *temp, *ptr, *ptr2; // Temporary pointers for node manipulation

    while(1) {
        // Display menu options
        printf("\nSINGLY LINKED LIST OPERATIONS MENU:\n");
        printf("1. Insertion at Beginning\n");
        printf("2. Insertion at End\n");
        printf("3. Insertion at a specific position\n");
        printf("4. Deletion from beginning\n");
        printf("5. Deletion from end\n");
        printf("6. Deletion of a specific element\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                // Insertion at the beginning
                printf("Enter the data to add at the beginning: ");
                scanf("%d", &d);
                temp = (struct node*)malloc(sizeof(struct node)); // Allocate memory for the new node
                if (temp == NULL) {
                    printf("OVERFLOW!!"); // Memory allocation failure
                    break;
                }
                temp->data = d; // Set data
                temp->link = head; // Link new node to the current head
                head = temp; // Update head to the new node
                break;

            case 2:
                // Insertion at the end
                printf("Enter the data to add at the end: ");
                scanf("%d", &d);
                temp = (struct node*)malloc(sizeof(struct node)); // Allocate memory for new node
                if (temp == NULL) {
                    printf("OVERFLOW!!"); // Memory allocation failure
                    break;
                }
                temp->data = d;
                temp->link = NULL; // New node will be the last, so link is NULL
                if (head == NULL) {
                    head = temp; // If list is empty, new node becomes the head
                } else {
                    ptr = head;
                    while (ptr->link != NULL) { // Traverse to the last node
                        ptr = ptr->link;
                    }
                    ptr->link = temp; // Link last node to the new node
                }
                break;

            case 3:
                // Insertion at a specific position
                printf("Enter the element after which to add data: ");
                scanf("%d", &key);
                printf("Enter the data to add: ");
                scanf("%d", &d);
                temp = (struct node*)malloc(sizeof(struct node)); // Allocate memory for new node
                if (temp == NULL) {
                    printf("OVERFLOW!!"); // Memory allocation failure
                    break;
                }
                temp->data = d;
                temp->link = NULL;
                ptr = head;
                // Traverse to find the specified key
                while (ptr != NULL && ptr->data != key) {
                    ptr = ptr->link;
                }
                if (ptr == NULL) {
                    printf("%d is not found in the list.", key); // Key not found
                    free(temp);
                } else {
                    temp->link = ptr->link; // Insert the new node after the specified key
                    ptr->link = temp;
                }
                break;

            case 4:
                // Deletion from beginning
                if (head == NULL) {
                    printf("UNDERFLOW!!\n"); // List is empty
                } else {
                    ptr = head;
                    head = head->link; // Move head to the next node
                    free(ptr); // Free the original head
                }
                break;

            case 5:
                // Deletion from end
                if (head == NULL) {
                    printf("UNDERFLOW!!\n"); // List is empty
                } else if (head->link == NULL) { // Only one node in the list
                    free(head); // Free the only node
                    head = NULL; // Update head to NULL
                } else {
                    ptr = head;
                    ptr2 = head->link;
                    while (ptr2->link != NULL) { // Traverse to the second-last node
                        ptr = ptr->link;
                        ptr2 = ptr2->link;
                    }
                    ptr->link = NULL; // Unlink the last node
                    free(ptr2); // Free the last node
                }
                break;

            case 6:
                // Deletion of a specific element
                printf("Enter the element you want to delete: ");
                scanf("%d", &key);
                if (head == NULL) {
                    printf("UNDERFLOW!!\n"); // List is empty
                } else if (head->data == key) { // If head contains the key
                    ptr = head;
                    head = head->link; // Move head to the next node
                    free(ptr); // Free the original head
                } else {
                    ptr = head;
                    ptr2 = head->link;
                    // Traverse to find the node to delete
                    while (ptr2 != NULL && ptr2->data != key) {
                        ptr = ptr->link;
                        ptr2 = ptr2->link;
                    }
                    if (ptr2 == NULL) {
                        printf("Element not found in list\n"); // Key not found
                    } else {
                        ptr->link = ptr2->link; // Unlink the node to delete
                        free(ptr2); // Free the node
                    }
                }
                break;

            case 7:
                // Display the list
                ptr = head;
                if (ptr == NULL) {
                    printf("LIST IS EMPTY\n"); // List is empty
                } else {
                    while (ptr != NULL) { // Traverse and print each node
                        printf("%d\t", ptr->data);
                        ptr = ptr->link;
                    }
                    printf("\n");
                }
                break;

            case 8:
                // Exit the program
                printf("Exiting...");
                return 0;

            default:
                // Invalid choice entered
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
