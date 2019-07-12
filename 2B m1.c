#include<stdio.h>
int main(){
	long long int num, i, factorial = 1;
	printf("Enter number:\t");
	fflush(stdin);
	scanf("%lld", &num);
	if(num >= 0){
		for(i = 1; i <= num; i++){
			factorial *= i;
		}
		printf("factorial of %lld is %lld\n", num, factorial);
	}
	else{
		printf("Invalid number.\n");
	}
	return 0;
}