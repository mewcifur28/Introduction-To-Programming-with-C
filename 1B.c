#include<stdio.h>
#include<math.h>
int main(){
	int continueChoice = 'y';
	while(continueChoice == 'y' || continueChoice == 'Y'){
		//menu
		printf("1. (ax + b)/(ax-b) \n");
		printf("2. 2.5logx - cos30 + |x^2 - y^2| + sqrt(2xy)\n");
		printf("3. x^5 + 10x^4 + 8x^3 + 4x + 2\n");
		//choice
		printf("Enter Choice:\t");
		int menuChoice;
		fflush(stdin);
		scanf("%d", &menuChoice);
		//switch case
		float a, b, c, x, y;
		switch(menuChoice){
			case 1:
                printf("Enter the values for a, b and x.\n");
                scanf("%f%f%f", &a, &b, &x);
                c = ((a * x) + b)/((a * x) - b);
                printf("%f\n", c);
                break;
            case 2:
                printf("Enter the values for x and y.\n");
                scanf("%f%f", &x, &y);
                c = (2.5 * log(x)) - cos(30) + abs(pow(x, 2) - pow(y, 2)) + sqrt(2 * x * y);
                printf("%f\n", c);
                break;
            case 3:
                printf("Enter the value for x.\n");
                scanf("%f", &x);
                c = (pow(x, 5) + (10 * pow(x, 4)) + (8 * pow(x, 3)) + (4 * x) + 2);
                printf("%f\n", c);
                break;
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