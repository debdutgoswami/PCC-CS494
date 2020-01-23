#include<stdio.h>
#include<stdlib.h>

/*helper function to print the array elements*/
void print(int *arr, int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/*bubble sort*/
void bsort(int *arr, int n){
	int i,j, temp;
	for(i=0;i<n-1;i++){
		printf("PASS %d:\n", i+1);
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			printf("\t");
			print(arr, n);
		}
		printf("\n");
	}
}

int main(void){
	int *arr, n, i;
	printf("n: ");
		scanf("%d", &n);
	arr = (int *)malloc(n*sizeof(int));
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
		
	bsort(arr, n);
	printf("the sorted array is ");
	print(arr, n);
	
	return 0;
}
