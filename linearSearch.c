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

// Include the standard input/output library
#include <stdio.h>

// Main function where program execution begins
void main() {
    // Initialize variables to track time and space complexity
    int timeComplexity = 0; // counts the number of operations
    int spaceComplexity; // will store the total memory used

    // Variables for user input and searching
    int NumOfElements; // number of elements in the array
    int iteration; // loop counter
    int searchElement; // element to search for
    int count = 0; // counts the number of occurrences of searchElement

    // Array to store user input
    int A[30];

    // Prompt user for number of elements
    printf("Enter the number of elements: ");
    timeComplexity++; // increment time complexity for printf

    // Read number of elements from user
    scanf("%d", &NumOfElements);
    timeComplexity++; // increment time complexity for scanf

    // Prompt user for elements
    printf("Enter the elements: ");
    timeComplexity++; // increment time complexity for printf

    // Read elements from user and store in array
    for (iteration = 0; iteration < NumOfElements; iteration++) {
        scanf("%d", &A[iteration]);
        timeComplexity++; // increment time complexity for scanf
        timeComplexity++; // increment time complexity for assignment
    }
    timeComplexity++; // increment time complexity for loop

    // Prompt user for search element
    printf("Enter search element: ");
    timeComplexity++; // increment time complexity for printf

    // Read search element from user
    scanf("%d", &searchElement);
    timeComplexity++; // increment time complexity for scanf

    // Search for element in array
    for (iteration = 0; iteration < NumOfElements; iteration++) {
        if (A[iteration] == searchElement) {
            count++; // increment count if element found
            printf("Element found at position %d.\n", iteration + 1);
            timeComplexity++; // increment time complexity for printf
            timeComplexity++; // increment time complexity for if statement
        }
        timeComplexity++; // increment time complexity for loop iteration
    }
    timeComplexity++; // increment time complexity for loop

    // Print result of search
    if (count > 0) {
        timeComplexity++; // increment time complexity for if statement
        printf("Element found %d times\n", count);
        timeComplexity++; // increment time complexity for printf
    } else {
        printf("Element not found");
        timeComplexity++; // increment time complexity for printf
        timeComplexity++; // increment time complexity for else statement
    }

    // Calculate space complexity
    spaceComplexity = (6 * 4) + (4 * NumOfElements);
    timeComplexity++; // increment time complexity for calculation
    timeComplexity++; // increment time complexity for assignment
    timeComplexity++; // increment time complexity for calculation

    // Print space and time complexity
    printf("The space complexity is %d\n", spaceComplexity);
    printf("The time complexity is %d\n", timeComplexity);
}
