/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Insertion Sort
 *    Date: 2024-08-29
 *
 *    Description: This is a C program to sort an array using the bubble sort     
 *    algorithm and also calculate the space complexity and time complexity.       
 ***********************************************************************************/
#include<stdio.h>
 int main()
 {
    int n;     
    int A[20];  
    int i;      
    int j;      
    int temp; 
    int tc=0;
    tc++;  
    printf("Enter the size of Array: ");
    tc++;
    scanf("%d",&n);
    tc++;
    for(i=0;i<n;i++){
       printf("Enter number %d : ",i+1);
       scanf("%d",&A[i]);
       tc++;
       tc++;
       tc++;
    }
    tc++;
    printf("The unsorted array is: \n");
    tc++;
    for(i=0;i<n;i++){
    	printf("%d\t",A[i]);
    	tc++;
    	tc++;
    }
    tc++;
    printf("\n");
    tc++;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                tc++;
                tc++;
                tc++;
            }
            tc++;
            tc++;
        }
        tc++;
    }
    tc++;
    tc++;
    printf("The sorted array is: \n");
    tc++;
    for (i = 0; i < n; i++){
        printf("%d\t",A[i]);
        tc++;
        tc++;
    }
    tc++;
    printf("\n");
    tc++;
    tc++;
    tc++;
    printf("Time Complexity = %d\n",tc);
    printf("Space Complexity = %d\n",(5*4)+(4*n));
}

