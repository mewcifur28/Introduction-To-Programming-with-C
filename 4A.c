#include<stdio.h>
int main(){
	int a = 0, b = 1, n, c, i = 2;
	printf("Enter number of terms:\t");
	fflush(stdin);
	scanf("%d", &n);
	if(n == 1){
		printf("%d\n", a);
	}
	else if(n >= 2){
		printf("%d\n%d\n", a, b);
		while(i < n){
			c = a + b;
			a = b;
			b = c;
			printf("%d\n", c);
			i++;
		}
	}
	return 0;
}