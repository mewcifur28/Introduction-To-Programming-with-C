#include<stdio.h>
int main(){
	int n;
	printf("Enter number of rows:\t");
	fflush(stdin);
	scanf("%d", &n);
	int i, j;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}