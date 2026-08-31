//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
	int num,i,count;
	printf("Enter a number :");
	scanf("%d",&num);
	count = num-2;
	for (i=num-1;i>1;i--){
		if (num%i==0){
			printf("not prime number \n");
			break;
		}
		count--;
	if (count == 0){
		printf("prime number \n");
	}
	}
	return 0;
}













