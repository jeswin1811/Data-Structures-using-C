/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Quick Sort
 *    Date: 2024-11-04
 *
 *    Description: This is a C program to sort an array using the Quick sort     
 *                 algorithm.       
 ***********************************************************************************/
#include <stdio.h>  

int partition(int a[], int start, int end) {  
    int pivot = a[end]; 
    int i = (start - 1);  
    for (int j = start; j <= end - 1; j++) {  
        if (a[j] < pivot) {  
            i++;  
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i + 1];  
    a[i + 1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  

void quick(int a[], int start, int end) {  
    if (start < end) {  
        int p = partition(a, start, end);  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  

void printArr(int a[], int n) {  
    for (int i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");
}  

int main() {  
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Before sorting, array elements are:\n");
    printArr(a, n);
    quick(a, 0, n - 1);
    printf("After sorting, array elements are:\n");
    printArr(a, n);
    return 0;  
}
