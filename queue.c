/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Queue Operations.
 *    Date: 2024-08-29
 *
 *    Description: This is a C program to create a queue data structure and perform   
 *          	   various queue operations on it.
 ***********************************************************************************/
#include<stdio.h>
#define max 6
int queue[max];
int front = -1;
int rear = -1;
void enque(int value) {
    if(rear == max - 1) {
        printf("Queue Overflow!! \n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = value;
    }
    else {
        rear++;
        queue[rear] = value;
    }
}
void deque() {
    if(front == -1 && rear == -1) {
        printf("Queue Underflow!!\n");
    }
    else if (front == rear)
    {
        printf("The dequed element is -> %d\n",queue[front]);
        front = -1;
        rear = -1;
    }
    else {
        printf("The dequed element is -> %d\n",queue[front]);
        front++;
    } 
}
void display() {
    if(front == -1 && rear == -1) {
        printf("Nothing to see here...");
    } 
    else {
        printf("The queue contains the following elements : \n");
        for(int i = front; i < rear+1; i++) {
            printf("%d\t",queue[i]);
        }
        printf("\n");
    } 
}
void peek() {
    if(front == -1 && rear == -1) {
        printf("Nothing to see here...\n");
    } 
    else {
        printf("The element in the front of the queue is : %d\n",queue[front]);
    }
}
int main() {
    int option;     
    int value;      
        printf("The operations that can be performed on a queue are listed below :\n");
        printf("1 -> Enqueue\n");
        printf("2 -> Dequeue\n");
        printf("3 -> Display\n");
        printf("4 -> Peek\n");
        printf("5 -> Exit\n");
    while (1) {
        printf("Choose your operation (1/2/3/4/5):\n ");
        scanf("%d",&option);

        switch (option) {
            case 1:
                printf("Enter the element to enqueue ");
                scanf("%d",&value);
                enque(value);
                break;
            case 2:
                deque();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                printf("Exiting....\n");
                return 0;
            default:
                printf("Invalid Choice \n");
        }
    }
    return 0;
}
