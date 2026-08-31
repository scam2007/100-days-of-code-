//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main(){
	int num1,num2,i;
	printf("enter number 1 : \n");
	scanf("%d",&num1);
	printf("Enter number 2 : \n");
	scanf("%d",&num2);
	for (i=num1;i>0;i--){
		if (num1%i==0){
			if (num2%i==0){
				printf("%d is the g.c.d of %d and %d",i,num1,num2);
				break;
			}
		}
	}
	return 0;
}











