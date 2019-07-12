#include <stdio.h>
int main(){
	int array[5], numOfElements = 5, i = 0;
	printf("Enter 5 numbers:\n");
	for(i = 0; i < numOfElements; i++){
		fflush(stdin);
		scanf("%d", &array[i]);
	}
	int largest = array[0];
	for(i = 0; i < numOfElements; i++){
		if(largest < array[i]){
			largest = array[i];
		}
	}
	printf("Largest number is %d\n", largest);
	return 0;
}