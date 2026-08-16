//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/
#include <stdio.h>
int main(){
	printf("This program checks for the sign of a given number \n");
	int x;
	printf("please enter a number");
	scanf("%d",&x);
	if (x > 0)
		printf("the number is positive \n");
	else  
		if (x == 0)
			printf("the number is zero \n");
		else 
			printf("the number is negetive \n");
	return 0;
}

