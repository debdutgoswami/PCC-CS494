#include<stdio.h>
#include<stdlib.h>

/*helper function to print the array elements*/
void print(int *arr, int n){
	int i;
	for(i=0;i<n;i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/*insertion sort*/
void isort(int *arr, int n){
	int i,j, key;
	for(i=1;i<n;i++){
		printf("PASS %d:\n", i);
		
		key = arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j--];
			printf("\t");
			print(arr, n);
		}
		arr[j+1] = key;
		printf("\t");
		print(arr, n);
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
		
	isort(arr, n);
	printf("the sorted array is ");
	print(arr, n);
	
	return 0;
}
