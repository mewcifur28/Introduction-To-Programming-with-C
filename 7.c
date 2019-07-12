#include<stdio.h>
int main(){
	char contChoice = 'y', arr1[100] = {'\0'}, arr2[100] = {'\0'}, arr3[200] = {'\0'};
	int menuChoice, len, i, j;
	while(contChoice == 'y' || contChoice == 'Y'){
		//display menu.
		printf("Choose an option you wish to perform on strings.\n");
		printf("1. Find Length of given string\n");
		printf("2. Concatenate two strings.\n");
		printf("3. Find the reverse of given string.\n");
		printf("4. Copy one string into another one.\n");
		printf("Enter choice.\n");
		fflush(stdin);
		scanf("%d", &menuChoice);
		switch(menuChoice){
			case 1:
				printf("Enter string.\n");
				fflush(stdin);
				gets(arr1);
				len = 0;
				for(i = 0; arr1[i] != '\0'; i++){
					len++;
				}
				printf("Length of '%s' is %d\n", arr1, len);
				break;
			case 2:
				printf("Enter first string.\n");
				fflush(stdin);
				gets(arr1);
				printf("Enter second string.\n");
				fflush(stdin);
				gets(arr2);
				i = 0;
				j= 0;
				while(arr1[j] != '\0'){
					arr3[i] = arr1[j];
					i++;
					j++;
				}
				j = 0;
				while(arr2[j] != '\0'){
					arr3[i] = arr2[j];
					i++;
					j++;
				}
				arr3[i] = '\0';

				printf("The concatenated string is: %s\n", arr3);
				break;
			case 3:
				printf("Enter string.\n");
				fflush(stdin);
				gets(arr1);
				len = 0;
				for(i = 0; arr1[i] != '\0'; i++){
					len++;
				}
				for(i = 0; i < len; i++){
					arr2[i] = arr1[len - i - 1];
				}
				arr2[len] = '\n';
				printf("The reversed string is: %s\n", arr2);
				break;
			case 4:
				printf("Enter string.\n");
				fflush(stdin);
				gets(arr1);
				for(i = 0; arr1[i] != '\0'; i++){
					arr2[i] = arr1[i];
				}
				arr2[i] = '\0';
				printf("Original string: %s\nCopied string: %s\n", arr1, arr2);
				break;
			default:
				printf("Sorry mate, wrong path.\n");
		}

		printf("Do you want to continue?\n");
		fflush(stdin);
		scanf("%c", &contChoice);
	}
	return 0;
}