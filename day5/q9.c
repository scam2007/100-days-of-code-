//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>
int main(){
	printf("This program calculates the amount of compound interest \n");
	float r,t,p,x;
	printf("enter yearly rate : \n");
	scanf("%f",&r);
	printf("enter time : \n");
	scanf("%f",&t);
	printf("enter the principal amount : \n");
	scanf("%f",&p);
	x = pow((1+r/100),t);
	printf("the final total amount is : %f",p*x);
	return 0;

}














