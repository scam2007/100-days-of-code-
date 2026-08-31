//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main (){
	int num1,num2,i;
	printf("enter num 1 : \n");
	scanf("%d",&num1);
	printf("enter num 2 : \n");
	scanf("%d",&num2);
	int count=0;
	for (i=num1;i>0;i--){
		if (num1%i==0){
			if (num2%i==0){
				printf("%d is the lcm of %d and %d",(num1*num2)/i,num1,num2);
				break;
			}
		}
	}
}







