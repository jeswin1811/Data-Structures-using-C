/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Binary Search 
 *    Date: 2024-08-08
 *
 *    Description: This is a C program to find an element from an array using        
 *    using the binary search algorithm and also calculate the space complexity
 *    and time complexity of the program.             
 ***********************************************************************************/
#include<stdio.h>
 int main()
 {
    int n;     
    int A[20];  
    int i;      
    int j;      
    int temp; 
    int timeComplexity=0;
    timeComplexity++;  
    printf("Enter the size of Array: ");
    timeComplexity++;
    scanf("%d",&n);
    timeComplexity++;
    for(i=0;i<n;i++){
       printf("Enter number %d : ",i+1);
       scanf("%d",&A[i]);
       timeComplexity++;
       timeComplexity++;
       timeComplexity++;
    }
    timeComplexity++;
    printf("\n");
    timeComplexity++;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                timeComplexity++;
                timeComplexity++;
                timeComplexity++;
            }
            timeComplexity++;
            timeComplexity++;
        }
        timeComplexity++;
    }
    timeComplexity++;
    timeComplexity++;
    printf("The sorted array is: \n");
    timeComplexity++;
    for (i = 0; i < n; i++){
        printf("%d\t",A[i]);
        timeComplexity++;
        timeComplexity++;
    }
    timeComplexity++;
    printf("\n");
    timeComplexity++;
    int left = 0;  
    timeComplexity++;     
    int right = n-1;  
    timeComplexity++;  
    int mid;            
    int x;              
    int flag = 0; 
    timeComplexity++;      
    printf("Enter number to be searched\n");
    timeComplexity++;
    scanf("%d",&x);
    timeComplexity++;
    if(x < A[left] || x > A[right] ){
      printf("%d is not found in the array ",x);
      return 0;
      timeComplexity++;
      timeComplexity++;
    }
    timeComplexity++;
    while(left <= right){
        mid = (left + right)/2;
        if(A[mid] == x){
            flag = 2;    
            break;
            timeComplexity++;
            timeComplexity++;
        }
        else if (x < A[mid]){
            right = mid - 1;
            timeComplexity++;
        }
        else if (x > A[mid]){
            left = mid + 1;
            timeComplexity++;
        }  
    }  
    timeComplexity++;
    timeComplexity++;
    if(flag == 2){
        printf("%d is found in the array at position %d\n",x,mid+1);
        timeComplexity++;
    }
    timeComplexity++;
    if(flag == 0){
        printf("%d is not found in the array \n",x);
        timeComplexity++;
    }
    timeComplexity++;
    timeComplexity++;
    timeComplexity++;
    printf("Time Complexity = %d\n",timeComplexity);
    printf("Space Complexity = %d\n",(10*4)+(4*n));
    return 0;
}
