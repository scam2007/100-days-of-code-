//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main(){
	int num,i,sum,temp,rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	temp = num;
	while (temp!=0){
		rem = temp%10;
		sum = sum + rem;
		temp/=10;
	}
	printf("the sum of the digits is %d \n",sum);
	return 0;
}








