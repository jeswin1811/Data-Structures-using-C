/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Infix to postix using stack.
 *    Date: 2024-09-12
 *
 *    Description: This is a C program to convert an infix expression to postfix
 	 	               using stack.
 ***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char stack[100];
int top=-1;
 
void push(char x){
    if(top == 100-1){
        printf("\nStack Overflow.");
    }
    else{
        stack[++top] = x;
    }
}

char pop(){
    if (top == -1){
        printf("Stack underflow: invalid infix expression.\n");
        exit(0);
    }
    else{
        return stack[top--];
    }
}

int priority(char x){
    if(x=='('){
        return 0;
    }
    if(x=='+'||x=='-'){
        return 1;
    }
    if(x=='*'||x=='/'){
        return 2;
    }
    if(x=='^'){
        return 3;
    }
    return 0;
}

int main(){
    char exp[100];
    char *e, x;
    printf("Enter the infix expression:\n");
    scanf("%s",exp);
    printf("\n");
    e = exp;

    while(*e != '\0'){
        if (isalnum(*e)){
            printf("%c ",*e);
        }
        else if (*e == '('){
            push(*e);
        }
        else if(*e == ')'){
            while (x = pop() != '('){
                printf("%c ",x);
            }
        }
        else{
            while ((top!=-1) && priority(stack[top] >= priority(*e)){
                printf("%c ",pop());
            }
            push(*e);
        }
        e++;
    }
    while (top != -1){
        printf("%c ",pop());
    }
    printf("\n");
    return 0;
}
