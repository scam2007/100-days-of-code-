//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
int main(){
	printf("This program swaps 2 numbers \n");
	int a,b,c;
	printf("Enter first number : \n");
	scanf("%d",&a);
	printf("enter second number : \n");
	scanf("%d",&b);
	printf("before swapping a=%d and b=%d \n",a,b);
	c=b;
	b=a;
	a=c;
	printf("after swapping a=%d and b=%d \n",a,b);
	return 0;
}
