#include<stdio.h>
int main(){
	char contChoice = 'y';
	int numOfMatrices = 0, menuChoice = 0, M1[10][10], M2[10][10], Sol[10][10], m = 0, n = 0, p = 0, q = 0, i = 0, j = 0, k = 0, sum = 0;
	while(contChoice == 'y' || contChoice == 'Y'){
		printf("\nEnter number of matrices you wish to perform actions upon. (1 or 2):  ");
		fflush(stdin);
		scanf("%d", &numOfMatrices);
		if(numOfMatrices == 1){
			//input the matrix along with dimensions
			printf("\nEnter the dimensions of the matrix.:  ");
			fflush(stdin);
			scanf("%d %d", &m, &n);
			printf("\nEnter the values of the matrix for the indicated indices:\n");
			for(i = 0; i < m; i ++){
				for(j = 0; j < n; j++){
					printf("Element %d, %d: ", i+1, j+1);
					fflush(stdin);
					scanf("%d", &M1[i][j]);
				}
			}
			printf("\nThe entered matrix is: \n");
			for(i = 0; i < m; i++){
				for(j = 0; j < n; j++){
					printf("%d ", M1[i][j]);
				}
				printf("\n");
			}
			//menu
			printf("\nThe following operations can be performed with 1 matrix.");
			printf("\n1. Transpose of a matrix.");
			printf("\n2. Upper and Lower Triangular matrices.");
			printf("\nEnter your choice.  ");
			fflush(stdin);
			scanf("%d", &menuChoice);
			switch(menuChoice){
				case 1: //transpose
					for(i = 0; i < n; i++){
						for(j = 0; j < m; j++){
							Sol[i][j] = M1[j][i];
						}
					}
					printf("\nTranspose of the matrix is:\n");
					for(i = 0; i < n; i++){
						for(j = 0; j < m; j++){
							printf("%d ", Sol[i][j]);
						}
						printf("\n");
					}
					break;
				case 2: // upper&lower triangles
					if(m == n){
						//upper
						printf("\nThe Upper Triangle for the given matrix is:\n");
						for(i = 0; i < n; i++){
							for(j = 0; j < i; j++){
								printf("  ");
							}
							for(j = i; j < n; j++){
								printf("%d ", M1[i][j]);
							}
							printf("\n");
						}
						//lower
						printf("\nThe Lower Triangle for the given matrix is:\n");
						for(i = 0; i < n; i++){
							for(j = 0; j <= i; j++){
								printf("%d ", M1[i][j]);
							}
							printf("\n");
						}
					}
					else{
						printf("\nOops! This option is available for square matrices only.");
					}
					break;
				default:
					printf("\nSorry mate, wrong path.");
					break;
			}
		}
		else if(numOfMatrices == 2){
			//to do 3 tasks
			//input the matrix1 along with dimensions
			printf("\nEnter the dimensions of the first matrix.:  ");
			fflush(stdin);
			scanf("%d %d", &m, &n);
			printf("\nEnter the values of the matrix for the indicated indices:\n");
			for(i = 0; i < m; i ++){
				for(j = 0; j < n; j++){
					printf("Element %d, %d: ", i+1, j+1);
					fflush(stdin);
					scanf("%d", &M1[i][j]);
				}
			}
			printf("\nThe entered matrix 1 is: \n");
			for(i = 0; i < m; i++){
				for(j = 0; j < n; j++){
					printf("%d ", M1[i][j]);
				}
				printf("\n");
			}
			//input the matrix2 along with dimensions
			printf("\nEnter the dimensions of the second matrix.:  ");
			fflush(stdin);
			scanf("%d %d", &p, &q);
			printf("\nEnter the values of the matrix for the indicated indices:\n");
			for(i = 0; i < p; i ++){
				for(j = 0; j < q; j++){
					printf("Element %d, %d: ", i+1, j+1);
					fflush(stdin);
					scanf("%d", &M2[i][j]);
				}
			}
			printf("\nThe entered matrix 2 is: \n");
			for(i = 0; i < p; i++){
				for(j = 0; j < q; j++){
					printf("%d ", M2[i][j]);
				}
				printf("\n");
			}
			//menu
			printf("\nThe following operations can be performed with 2 matrices.");
			printf("\n1. Addition of two matrices.");
			printf("\n2. Subtraction of two matrices.");
			printf("\n3. Multiplication of two matrices.");
			printf("\nEnter your choice.  ");
			fflush(stdin);
			scanf("%d", &menuChoice);
			switch(menuChoice){
				case 1: //Addition
					if(m == p && n == q){
						for(i = 0; i < m; i++){
							for(j = 0; j < n; j++){
								Sol[i][j] = M1[i][j] + M2[i][j];
							}
						}
						printf("\nSum of the matrices is: \n");
						for(i = 0; i < m; i++){
							for(j = 0; j < n; j++){
								printf("%d ", Sol[i][j]);
							}
							printf("\n");
						}
					}
					else{
						printf("\nOops! The matrices are not compatible for addition.");
					}
					break;
				case 2: //Subtraction
					if(m == p && n == q){
						for(i = 0; i < m; i++){
							for(j = 0; j < n; j++){
								Sol[i][j] = M1[i][j] - M2[i][j];
							}
						}
						printf("\nDifference of the matrices is: \n");
						for(i = 0; i < m; i++){
							for(j = 0; j < n; j++){
								printf("%d ", Sol[i][j]);
							}
							printf("\n");
						}
					}
					else{
						printf("\nOops! The matrices are not compatible for subtraction.");
					}
					break;
				case 3: //Multiplication
					if(n == p){
						for(i = 0; i < m; i++){
							for(k = 0; k < q; k++){
								sum = 0;
								for(j = 0; j < n; j++){
									sum += M1[i][j] * M2[j][k];
								}
								Sol[i][k] = sum;
							}
						}
						for(i = 0; i < m; i++){
							for(k = 0; k < q; k++){
								printf("%d ", Sol[i][k]);
							}
							printf("\n");
						}
					}
					else{
						printf("\nOops! The matrices are not compatible for multiplication.");
					}
					//printf("\n I haven't programmed this path yet.");
					break;
				default:
					printf("\nSorry mate, wrong path.");
					break;
			}
		}
		else{
			printf("\nSorry mate, wrong path.");
		}
		printf("\nDo you want to continue (y or n):\t");
		fflush(stdin);
		scanf("%c", &contChoice);
	}
	return 0;
}