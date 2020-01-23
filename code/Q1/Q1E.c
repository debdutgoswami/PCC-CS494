#include <stdio.h>

void TOH(int n,char A, char B, char C){
	if(n==1)
		printf("moving from %c to %c\n", A, C);
	else{
		TOH(n-1, A, C, B);
		TOH(1, A, B, C);
		TOH(n-1, B, A, C);
	}
}

int main(void){
	int n;
	printf("n: ");
		scanf("%d", &n);
	
	TOH(n, 'A', 'B', 'C');
	
	return 0;
}
