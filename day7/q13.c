//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

/*
Sample Test Cases:
Input 1:
2020
Output 1:
Leap year

Input 2:
1900
Output 2:
Not a leap year

Input 3:
2000
Output 3:
Leap year

*/
#include <stdio.h>
int main(){
	printf("Thisprogram checks for leap year \n");
	int x;
	printf("please enter the year : \n");
	scanf("%d",&x);
	if (x%400 == 0)
		printf("This is a leap year");
	else 
		if (x%4 == 0)
			printf("This is a leap year");
		else 
			printf("not a leap year \n");
	return 0;
}












