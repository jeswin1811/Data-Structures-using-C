/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Insertion Sort
 *    Date: 2024-08-09
 *
 *    Description: This is a C program to sort an array using the insertion sort     
 *    algorithm and also calculate the space complexity and time complexity.       
 ***********************************************************************************/
#include <stdio.h>

int main() {
    int n, i, j, a[40], temp;
    printf("Enter the size of your array:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("The unsorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    for (i = 1; i < n; i++) {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--) {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
    }
    printf("The sorted array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}
