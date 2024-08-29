/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Polynomial expression representation using array.
 *    Date: 2024-08-29
 *
 *    Description: This is a C program to represent a polynomial expression using an    
 *   		   array.
 ***********************************************************************************/
#include<stdio.h>
struct Polynomial{
		int coeff;
		int expo;
		}a[20];
int main(){
	int n,i;
	printf("Enter the number of terms: \n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the exponent of x: \n");
		scanf("%d",&a[i].expo);
		printf("Enter the coefficient of x^%d: \n",a[i].expo);
		scanf("%d",&a[i].coeff);
	}
	printf("The polynomial is: \n");
	for (i=0;i<n;i++){
		printf("(%dx^%d)",a[i].coeff,a[i].expo);
		if(i<n-1){
			printf(" + ");
		}
	}
	printf("\n");
	return 0;
}
