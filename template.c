#include<stdio.h>
int main(){
	int continueChoice = 'y';
	while(continueChoice == 'y' || continueChoice == 'Y'){
		//menu
		//choice
		printf("Enter Choice:\t");
		int menuChoice;
		fflush(stdin);
		scanf("%d", &menuChoice);
		//switch case
		switch(menuChoice){
			default:
				printf("Sorry, wrong choice!\n");
				break;
		}
		//continue
		printf("Do you want to continue? (y/n):\t");
		fflush(stdin);
		scanf("%c", &continueChoice);
	}
	return 0;
}