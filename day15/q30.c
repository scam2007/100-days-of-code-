//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main (){
	int num,count=0,rem;
	int digits[15];
	printf("enter the number to be reversed : ");
	scanf("%d",&num);
	while(num !=0){
		rem = num%10;
		digits[count]= rem;
		count++;
		num = num/10;
	}
	for(int i=0;i<count;i++){
		printf("%d",digits[i]);
	}
	printf("\n");
	return 0;
}


