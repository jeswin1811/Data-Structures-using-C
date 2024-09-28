/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Singly Linked List
 *    Date: 2024-09-28
 *
 *    Description: This is a C program to implement singly linked list data 
 *	 	           structure and perform operations on it.   
 ***********************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head = NULL;

struct node* insertionAtEnd(struct node *head,int d){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *ptr;
    if (temp == NULL){
        printf("OVERFLOW!!");
        return head;
    }
    temp->data = d;
    temp->link = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        ptr = head;
        while(ptr->link!=NULL){
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
    return head;
}

struct node* insertionAtBeginning(struct node *head, int d){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW!!");
        return head;
    }
    ptr->data = d;
    ptr->link = NULL;
    if(head==NULL){
        head = ptr;
    }
    else{
        ptr->link = head;
        head = ptr;
    }
    return head;
}

struct node* insertionAtPosition(struct node *head,int d,int key){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = head;
    if(temp == NULL){
        printf("OVERFLOW!!");
        return head;
    }
    temp->data = d;
    temp->link = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        while(ptr!=NULL&&ptr->data != key){
            ptr = ptr->link;
        }
        if(ptr==NULL){
            printf("%d is not found in the list.",key);
            free(temp);
            return head;
        }
        else{
        temp->link = ptr->link;
        ptr->link = temp;
        }
    }
    return head;
}


struct node* deletionAtBeginning(){
    struct node *ptr = head;
    if(head==NULL){
        printf("UNDERFLOW!!\n");
        return head;
    }
    if(head->link == NULL){
        head = NULL;
        free(ptr);
    }
    else{
        head=ptr->link;
        free(ptr);
    }
    return head;
}

struct node* deletionAtEnd(){
    struct node *ptr = head;
    struct node *ptr2;
    if (head == NULL){
        printf("UNDERFLOW!!\n");
        return head;
    }
    if (head->link == NULL){
        head = NULL;
        free(ptr);
    }
    else{
        ptr2 = ptr->link;
        while(ptr2->link != NULL){
            ptr = ptr->link;
            ptr2 = ptr2->link;
        }
        ptr->link = NULL;
        free(ptr2);
    }
    return head;
}

struct node* deletionAtPosition(struct node *head,int key){
    struct node *ptr = head;
    struct node *ptr2;
    if(head == NULL){
        printf("UNDERFLOW!!\n");
        return head;
    }
    if(ptr->data == key){
        if(ptr->link == NULL){
            head = NULL;
        }
        else{
            head = ptr->link;
        }
        free(ptr);
        return head;
    }
    else{
        ptr2 = ptr->link;
        while(ptr2 != NULL && ptr2->data != key){
            ptr=ptr->link;
            ptr2=ptr2->link;
        }
        if(ptr2 == NULL){
            printf("Element not found in list\n");
        }
        else{
        ptr->link = ptr2->link;
        free(ptr2);
        }
    }
    return head;
}

void display(){
    struct node *ptr = head;
    if(ptr == NULL){
        printf("LIST IS EMPTY\n");
    }
    while(ptr!=NULL){
        printf("%d\t",ptr->data);
        ptr = ptr->link;
    }
}

int main(){
    int choice, d, key;
    
    while(1){
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

        switch(choice){
            case 1:
                printf("Enter the data to add at the beginning: ");
                scanf("%d", &d);
                head = insertionAtBeginning(head, d);
                break;
            case 2:
                printf("Enter the data to add at the end: ");
                scanf("%d", &d);
                head = insertionAtEnd(head, d);
                break;
            case 3:
                display();
                printf("\nEnter the element after which to add data: ");
                scanf("%d", &key);
                printf("Enter the data to add: ");
                scanf("%d", &d);
                head = insertionAtPosition(head, d, key);
                break;
            case 4:
                head = deletionAtBeginning();
                break;
            case 5:
                head = deletionAtEnd();
                break;
            case 6:
                printf("Enter the element you want to delete: ");
                scanf("%d",&key);
                head = deletionAtPosition(head,key);
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Exiting...");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
