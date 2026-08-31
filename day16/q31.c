//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main (){
	int num,i,count=0,rem;
	int digit[50];
	printf("Enter the number : ");
	scanf("%d",&num);
	while(num != 0){
		rem = num%2;
		digit[count] = rem;
		count++;
		num = num/2;
	}
	for (i=count-1;i>=0;i--){
		printf("%d",digit[i]);
	}
	printf("\n");
	return 0;
}
