#include<stdio.h>

//BUBBLE SORT
void bubblesort(int a[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(a[j] > a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

//SELECTION SORT
void selectionsort(int a[], int n){	
	int small;
	for(int i=0; i<n; i++){
		small = i;
		for(int j=i+1; j<n; j++){
			if(a[small] > a[j]){
				small = j;
			}
		}
		if(i != small){
			int temp = a[i];
			a[i] = a[small];
			a[small] = temp;
		}
	}
}

//INSERTION SORT
void insertionsort(int a[], int n){
	for(int i=0; i<n; i++){
		int temp = a[i];
		int j = i-1;
		while(j>=0 && temp<a[j]){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
}
//QUICKSORT
int partition(int a[], int l, int h){
	int pivot = a[l];
	int i = l+1;
	int j = h;
	while(i<=j){
		while(a[i]<pivot && i<=h){
			i++;
		}
		while(a[j]>=pivot && j>l){
			j--;
		}
		if(i < j){
			int temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
	}
	int temp = a[l];
	a[l] = a[j];
	a[j] = temp;
	return j;
}

void quicksort(int a[], int l, int h){
	if(l<h){
		int j = partition(a,l,h);
		quicksort(a,l,j-1);
		quicksort(a,j+1,h);
	}
}

//MERGE SORT
int merge(int a[], int low, int mid, int high){
	int temp[100];
	int left = low;
	int right = mid+1;
	int i = low;
	
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

//MAIN FUNCTION
void main(){
	int n,ch;
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
	printf("\n");
	printf("\nChoose your sorting algorithm:\n");
	printf("\n1. Bubble Sort\n");
	printf("\n2. Selection Sort\n");
	printf("\n3. Insertion Sort\n");
	printf("\n4. Quick Sort\n");
	printf("\n5. Merge Sort\n");
	printf("\nYour Choice: ");
	scanf("%d",&ch);
	switch(ch){
	case 1:
		bubblesort(a,n);
		break;
	case 2:
		selectionsort(a,n);
		break;
	case 3:
		insertionsort(a,n);
		break;
	case 4:
		quicksort(a,0,n-1);
		break;
	case 5:
		mergesort(a,0,n-1);
		break;
	default:
		printf("\nInvalid Choice\n");
	}
	printf("\nThe sorted array is:\n");
	for(int i=0; i<n; i++){
	printf("%d\t",a[i]);
	}
	printf("\n");
}
