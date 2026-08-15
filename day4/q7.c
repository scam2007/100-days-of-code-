//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
#include <stdio.h>
int main(){
	printf("This program swaps 2 nums without thrid variable \n");
	int a,b;
	printf("enter first number : \n");
	scanf("%d",&a);
	printf("enter second number : \n");
	scanf("%d",&b);
	printf("Before swapping the numbers are a = %d and b = %d \n",a,b);
	a = b+a;
	b = a-b;
	a = a-b;
	printf("after swapping the numbers are a = %d  and b = %d \n",a,b);
	return 0;
}







