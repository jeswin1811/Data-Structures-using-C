/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Stack Operations.
 *    Date: 2024-09-10
 *
 *    Description: This is a C program to create a stack data structure and perform   
 *          	   various stack operations on it.
 ***********************************************************************************/
#include<stdio.h>

int ch;     
int element;
int MAX_SIZE;
int stack[100];
int top = -1;

void push(int value) {
    if(top == MAX_SIZE-1){
        printf("STACK OVERFLOW!!\n",value);
    }
    else {
        stack[++top] = value;
        printf("%d is pushed into the stack\n",value);
    }
}

int pop() {
    if(top < 0) {
        printf("STACK UNDERFLOW!!\n");
        return -1;
    }
    else{
        int value = stack[top--];
        printf("%d is popped from the stack\n",value);
        return value;
    }
}

void display() {
     if(top < 0) {
        printf("Stack is empty\n");
    }
    else {
        printf("Elements in the stack are : \n");
        for(int i = 0; i <= top; i++){
            printf("%d\t",stack[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("Enter the max size: ");
    scanf("%d",&MAX_SIZE);
    printf("The operations that can be performed on a stack are listed below :\n");
        printf("1 -> Push\n");
        printf("2 -> Pop\n");
        printf("3 -> Display\n");
        printf("4 -> Exit\n");
    while (1) {
        printf("Enter the operation number you want to perform: ");
        scanf("%d",&ch);
        switch (ch) {
            case 1:
                printf("Enter the number to be pushed to the stack: ");
                scanf("%d",&element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting....");
                return 0;
            default:
                printf("Invalid entry. Please choose a valid number. ");
        }
    }
    return 0;
}
				
