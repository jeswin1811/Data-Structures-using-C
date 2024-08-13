/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Selection Sort
 *    Date: 2024-08-13
 *
 *    Description: This is a C program to sort an array using the selection sort 
 *                 algorithm and calculate space complexity and time complexity 
 *                 of the program.             
 ***********************************************************************************/
#include<stdio.h>

void main(){
    int a[20], n, i, j, temp, small, tc = 0;
    tc++;
    printf("Enter the size of array: \n");
    tc++;
    scanf("%d", &n);
    tc++;
    printf("Enter the number of elements: \n");
    tc++;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
        tc++;
        tc++;
    }
    tc++;
    printf("The unsorted array is: \n");
    tc++;
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
        tc++;
        tc++;
    }
    tc++;
    for(i = 0; i < n; i++){
        small = i;
        for(j = i + 1; j < n; j++){
            if(a[small] > a[j]){
                small = j;
                tc++;
            }
            tc++;
            tc++;
        }
        tc++;
        if(i != small){
            temp = a[i];
            a[i] = a[small];
            a[small] = temp;
            tc++;
            tc++;
            tc++;
        }
        tc++;
        tc++;
        tc++;
    }
    tc++;
    printf("\n");
    tc++;
    printf("The sorted array is: \n");
    tc++;
    for(i = 0; i < n; i++){
        printf("%d\t", a[i]);
        tc++;
        tc++;
    }
    tc++;
    printf("\n");
    tc++;
    tc++;
    tc++;
    printf("Time Complexity = %d\n", tc);
    printf("Space Complexity = %d\n", (6*4) + (4*n));
}