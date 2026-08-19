//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include <stdio.h>
int main(){
	printf("This program checks for largest number among three \n");
	int a,b,c;
	printf("Enter the three numbers  : ");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
		printf("%d is the largest num",a);
	else if (b>c && b>a)
		printf("%d is the largest num",b);
	else if (c>a && c>b)
		printf("%d is the largest num",c);
	return 0;
}














