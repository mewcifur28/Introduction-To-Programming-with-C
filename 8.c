/*
Student Information system using structures
*/
#include<stdio.h>
struct student{
	int rollNum;
	char name[50];
	char course[10];
	char department[5];
	int yearOfJoin;
};
struct student S[100];
int count = 0;
void display(struct student s){
	printf("Roll Number:\t\t%d\n", s.rollNum);
	printf("Name:\t\t\t%s\n", s.name);
	printf("Course:\t\t\t%s\n", s.course);
	printf("Department:\t\t%s\n", s.department);
	printf("Year of joining:\t%d\n", s.yearOfJoin);
	int j;
	for(j = 0; j < 30; j++){
		printf("-");
	}
	printf("\n");
}
struct student takeInfo(){
	struct student s;
	printf("Enter roll number:\t");
	scanf("%d", &s.rollNum);
	printf("Enter name:\t\t");
	fflush(stdin);
	gets(s.name);
	printf("Enter course name:\t");
	gets(s.course);
	printf("Enter Department name:\t");
	gets(s.department);
	printf("Enter year of joining:\t");
	scanf("%d", &s.yearOfJoin);
	return s;
}
void printYear(int year){
	int flag = 0;
	int i;
	for(i = 0; i < count; i++){
		if(S[i].yearOfJoin == year){
			display(S[i]);
			flag = 1;
		}
	}
	if(flag == 0){
		printf("No Students.\n");
	}
}
void printRollNum(int Rollnum){
	int flag = 0;
	int i;
	for(i = 0; i < count; i++){
		if(S[i].rollNum == Rollnum){
			display(S[i]);
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("No Students.\n");
	}
}
int main(){
	char Continue1 = 'y', Continue2 = 'y';
	int menuChoice, Year, rollnum;
	printf("Enter details for the student information system.\n");
	while(Continue1 == 'y'){
		S[count] = takeInfo();
		count++;
		printf("Do you want to continue?\t");
		fflush(stdin);
		scanf("%c", &Continue1);
	}
	while(Continue2 == 'y'){
		printf("Display Information:\n");
		printf("1. Details of all students who joined in a particular year.\n");
		printf("2. Details of a particular student. \n");
		printf("Enter choice:\t");
		scanf("%d", &menuChoice);
		switch(menuChoice){
			case 1:
				printf("Enter year:\t");
				scanf("%d", &Year);
				printYear(Year);
				break;
			case 2:
				printf("Enter roll number of student:\t");
				scanf("%d", &rollnum);
				printRollNum(rollnum);
				break;
			default:
				printf("Choice unavailable!\n");
		}
		printf("Do you want to continue?\t");
		fflush(stdin);
		scanf("%c", &Continue2);
	}
	return 0;
}