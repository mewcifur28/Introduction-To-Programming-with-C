#include<stdio.h>
#include <stdbool.h>
// 0 - prime
// 1 - not prime
void buildSieve(bool sieve[100]){
	sieve[0] = sieve[1] = 1;
	int i, j;
	for(i = 2; i <= 100; i++){
		for(j = i*i; j <=100; j += i){
			sieve[j] = 1;
		}
	}
}
int main(){
	bool sieve[100] = {0};
	buildSieve(sieve);
	int i;
	for(i = 0; i < 100; i++){
		if(!sieve[i]){
			printf("%d\n", i);
		}
	}
	return 0;
}