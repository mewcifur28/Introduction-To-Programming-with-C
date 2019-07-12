#include<stdio.h>
int main(){
	char contChoice = 'y', Operator;;
	int op1, op2;
	while(contChoice == 'y'){
		printf("Enter operand 1:\n");
		fflush(stdin);
		scanf("%d", &op1);
		printf("Enter operand 2:\n");
		fflush(stdin);
		scanf("%d", &op2);
		printf("Enter Operator:[+, -, *, /, %%]\n");
		fflush(stdin);
		scanf("%c", &Operator);
		switch(Operator){
			case '+':
				printf("%d + %d = %d\n", op1, op2, op1 + op2);
				break;
			case '-':
				printf("%d - %d = %d\n", op1, op2, op1 - op2);
				break;
			case '/':
				printf("%d/%d = %d\n", op1, op2, op1 / op2);
				break;
			case '*':
				printf("%d * %d = %d\n", op1, op2, op1 * op2);
				break;
			case '%':
				printf("%d %% %d = %d\n", op1, op2, op1 % op2);
				break;
			default:
				printf("Sorry, operation unavailable.\n");
		}

		printf("Do you want to continue?\n");
		fflush(stdin);
		scanf("%c", &contChoice);
	}
	return 0;
}