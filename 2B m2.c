#include<stdio.h>
long long int fact(long long int num){
	if(num == 0){
		return 1;
	}
	return num * fact(num - 1);
}
int main(){
	long long int num, factorial;
	printf("Enter number:\t");
	fflush(stdin);
	scanf("%lld", &num);
	if(num >= 0){
		factorial = fact(num);
		printf("factorial of %lld is %lld\n", num, factorial);
	}
	else{
		printf("Invalid number.\n");
	}
	return 0;
}