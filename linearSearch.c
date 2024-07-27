/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Linear Search 
 *    Date: 2024-07-25
 *
 *    Description: This is a C program to find an element from an array using        
 *    using the linear search algorithm and also calculate the space complexity
 *    and time complexity of the program.
 ***********************************************************************************/

#include<stdio.h>
void main(){
    int timeComplexity=0;
    timeComplexity++;
    int NumOfElements;
    int iteration;
    int searchElement;
    int count=0;
    timeComplexity++;
    int A[30];
    int spaceComplexity;
    printf("Enter the number of elements: ");
    timeComplexity++;
    scanf("%d",&NumOfElements);
    timeComplexity++;
    printf("Enter the elements: ");
    timeComplexity++;
    for(iteration=0;iteration<NumOfElements;iteration++){ 
        scanf("%d",&A[iteration]);
        timeComplexity++;
        timeComplexity++;
    }
    timeComplexity++;
    printf("Enter search element:");
    timeComplexity++;
    scanf("%d",&searchElement);
    timeComplexity++;
    for(iteration=0;iteration<NumOfElements;iteration++){
        if(A[iteration]==searchElement){
            count++;
            printf("Element found at position %d.\n",iteration+1);
            timeComplexity++;
            timeComplexity++;
        }
        timeComplexity++;
    }
    timeComplexity++;
    if(count>0){
        timeComplexity++;
        printf("Element found %d times\n",count);
        timeComplexity++;
    }
    else{
        printf("Element not found");
        timeComplexity++;
        timeComplexity++;
    }
    spaceComplexity = (6*4)+(4*NumOfElements);
    timeComplexity++;
    timeComplexity++;
    timeComplexity++;
    printf("The space complexity is %d\n",spaceComplexity);
    printf("The time complexity is %d\n",timeComplexity);
}
