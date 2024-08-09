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
#include<stdio.h>
void main(){
    int n,i,j,a[40],temp,TimeComplexity=0;
    TimeComplexity++;
    printf("Enter the size of your array:\n");
    TimeComplexity++;
    scanf("%d",&n);
    TimeComplexity++;
    printf("Enter the elements:\n");
    TimeComplexity++;
    for(i=0;i<n;i++){
        TimeComplexity++;
        scanf("%d",&a[i]);
        TimeComplexity++;
    }
    TimeComplexity++;
    printf("The unsorted array is:\n");
    TimeComplexity++;
    for(i=0;i<n;i++){
        TimeComplexity++;
        printf("%d\t",a[i]);
        TimeComplexity++;
    }
    TimeComplexity++;
    printf("\n");
    TimeComplexity++;
    for(i=1;i<n;i++){
        TimeComplexity++;
        temp = a[i];
        TimeComplexity++;
        for(j=i-1;j>=0;j--){
            TimeComplexity++;
            if(temp<a[j]){
                a[j+1]=a[j];
                TimeComplexity++;
            }else break;
            TimeComplexity++;
        }
        TimeComplexity++;
        a[j+1]=temp;
        TimeComplexity++;
    }
    TimeComplexity++;
    printf("The sorted array is:\n");
    TimeComplexity++;
    for(i=0;i<n;i++){
        TimeComplexity++;
        printf("%d\t",a[i]);
        TimeComplexity++;
    }
    TimeComplexity++;
    printf("\n");
    TimeComplexity++;
    TimeComplexity++;
    TimeComplexity++;
    printf("Time Complexity = %d\n",TimeComplexity);
    printf("Space Complexity = ",(5*4)+(4*n));
}