#include<stdio.h>

int main(){
	
	int age;
	float salary;
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Enter the salary:");
	scanf("%f", &salary);
	
	if(age >= 21 and salary >= 21000){
		printf("Congratulation you qualify for a a loan");
	}
	if(age < 21 and salary < 21000){
		printf("Unfortunately,we are unable to offer you a loan at this time");
	}
	return 0;
}