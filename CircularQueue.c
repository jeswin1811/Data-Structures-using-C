/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Circular Queue.
 *    Date: 2024-09-07
 *
 *    Description: This is a C program to create a circular queue data structure 
 	 	   and perform various operations on it.
 ***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int n, item, Max_size;
int queue[100];
int front = -1;
int rear = -1;

void enqueue(int item){
	if ((rear+1)%Max_size==front){
		printf("Queue Overflow!!\n\n");
	}
	else if(rear==-1&&front==-1){
		rear = 0;
		front = 0;
		queue[rear] = item;
	}
	else{
		rear=(rear+1)%Max_size;
		queue[rear] = item;
	}
}

void dequeue(){
	if (rear==-1&&front==-1){
		printf("Queue Underflow!!\n\n");
	}
	else if (front == rear){
		printf("Removed element is: %d\n",queue[front]);
		front = -1;
		rear = -1;
	}
	else{
		printf("Removed element is: %d\n",queue[front]);
		front = (front+1)%Max_size;
	}
}
	
void display(){
	if(front==-1&&rear==-1){
		printf("Queue is Empty!!\n\n");
	}
	else{
		int i = front;
		printf("******************QUEUE******************\n");
		while(i != rear){
			printf("%d\t",queue[i]);
			i = (i+1)%Max_size;
		}
		printf("%d",queue[rear]);
		printf("\n");
	}
}

void main(){
    printf("Enter the max size of circular queue: ");
    scanf("%d",&Max_size);
    printf("****CIRCULAR QUEUE OPERATIONS****\n1. Enqueue (Add an element to queue)\n2. Dequeue (Remove an element from queue)\n3. Display\n4. Exit\n");
	while(1){
        printf("Enter your choice (1/2/3/4):\n");
        scanf("%d",&n);
		switch(n){
			case 1:
				printf("Enter the element you want to enqueue:");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
                printf("Exiting...");
				exit(1);
				break;
			default:
				printf("INVALID CHOICE");
		}
	}
}
