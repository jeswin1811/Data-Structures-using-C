/***********************************************************************************
 *                         Jeswin Thampichan Joseph
 *            Computer Science and Engineering Student, SJCET, Palai
 *                        Email: jeswintj16@gmail.com
 *
 *    Project Title: Merge Sort
 *    Date: 2024-11-04
 *
 *    Description: This is a C program to sort an array using the merge sort     
 *                 algorithm.
 ***********************************************************************************/
#include<stdio.h>

void merge(int a[], int low, int mid, int high){
	int left = low;
	int right = mid+1;
	int i = low;
	int temp[100];
	while(left<=mid && right<=high){
		if(a[left] <= a[right]){
			temp[i++] = a[left++];
		}
		else{
			temp[i++] = a[right++];
		}
	}
	while(left <= mid){
		temp[i++] = a[left++];
	}
	while(right <= high){
		temp[i++] = a[right++];
	}
	for(int j=low; j<=high; j++){
		a[j] = temp[j];
	}
}

void mergesort(int a[], int low, int high){
	if(low < high){
		int mid = (low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}

void main(){
	int n;
	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements of the array:\n");
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe unsorted array is:\n");
	for(int i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	mergesort(a,0,n-1);
	printf("\nThe sorted array is:\n");
	for(int i=0; i<n; i++){
	printf("%d\t",a[i]);
	}
	printf("\n");
}


