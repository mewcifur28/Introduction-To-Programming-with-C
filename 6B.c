#include<stdio.h>
int counter = 0;
void towerOfHanoi(int n, char source, char destination, char helper){
	//counter++;
	if(n == 0){
		return;
	}
	else{
		towerOfHanoi(n - 1, source, helper, destination);
		printf("Step #%d: Move disk number %d from %c to %c\n", ++counter, n, source, destination);
		towerOfHanoi(n - 1, helper, destination, source);
	}
}
int main(){
	int numOfDiscs;
	char source = 'A', destination = 'C', helper = 'B';
	printf("Enter number of discs:\t");
	fflush(stdin);
	scanf("%d", &numOfDiscs);
	towerOfHanoi(numOfDiscs, source, destination, helper);
	return 0;
}