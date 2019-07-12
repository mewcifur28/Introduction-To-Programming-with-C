#include<stdio.h>
int main(){
	char continueChoice = 'y';
	while(continueChoice == 'y' || continueChoice == 'Y'){
		//menu
		printf("1. Find ASCII value of a character\n");
		printf("2. Find character of an ASCII value\n");
		printf("Enter choice:	\t");
		int menuChoice;
		fflush(stdin);
		scanf("%d", &menuChoice);
		int num;
		char ch;
		switch(menuChoice){
			case 1:
				printf("Enter character:\t");
				fflush(stdin);
				scanf("%c", &ch);
				printf("%d\n", ch);
				break;
			case 2:
				printf("Enter ASCII number:\t");
				fflush(stdin);
				scanf("%d", &num);
				printf("%c\n", num);
				break;
			default:
				printf("Sorry, wrong choice!\n");
				break;
		}
		printf("Do you want to continue? (y/n):\t");
		fflush(stdin);
		scanf("%c", &continueChoice);
	}
	return 0;
}