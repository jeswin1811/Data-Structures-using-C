
/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Binary Search 
 *    Date: 2024-07-27
 *
 *    Description: This is a C program to find an element from an array using        
 *    using the binary search algorithm and also calculate the space complexity
 *    and time complexity of the program.             
 ***********************************************************************************/

#include<stdio.h>
void main(){
    int timeComplexity=0;
    int spaceComplexity;
    int numOfelements;
    int A[30];
    int i;
    int j;
    int temp;
    int left=0;
    timeComplexity++;
    int right=numOfelements-1;
    timeComplexity++;
    int searchElement;
    int flag;
    int mid;
    printf("Enter the number of elements:\n");
    timeComplexity++;
    scanf("%d",&numOfelements);
    timeComplexity++;
    printf("Enter the elements:\n");
    timeComplexity++;
    for(i=0;i<numOfelements;i++){
        scanf("%d",&A[i]);
        timeComplexity++;
        timeComplexity++;
    }
    timeComplexity++;
    for(i=0;i<numOfelements-1;i++){
        for(j=0;j<numOfelements-1-i;j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                timeComplexity++;
                timeComplexity++;
                timeComplexity++;
                timeComplexity++;
            }
            timeComplexity++;
        }
        timeComplexity++;
        timeComplexity++;
    }
    timeComplexity++;
    printf("Enter the search element:\n");
    timeComplexity++;
    scanf("%d",&searchElement);
    timeComplexity++;
    while(left<=right){
        mid = left+(right-left)/2;
        if(searchElement==A[mid]){
            timeComplexity++;
            flag = 1;
            timeComplexity++;
            break;
        }
        else if(searchElement>A[mid]){
            timeComplexity++;
            left = mid+1;
            timeComplexity++;
        }
        else if(searchElement<A[mid]){
            timeComplexity++;
            right = mid-1;
            timeComplexity++;
        }
        timeComplexity++;
        timeComplexity++;
    }
    timeComplexity++;
    if(flag==0){
        timeComplexity++;
        printf("Element not found.\n");
        timeComplexity++;
    }
    else{
        timeComplexity++;
        printf("Element found.\n");
        timeComplexity++;
    }
    spaceComplexity = (11*4)+(4*numOfelements);
    timeComplexity++;
    timeComplexity++;
    timeComplexity++;
    printf("The time complexity is %d\n",timeComplexity);
    printf("The space complexity is %d\n",spaceComplexity);
}
