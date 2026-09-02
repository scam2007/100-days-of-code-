//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main(){
	int num,rem,temp,fact=0,i,f;
	printf("enter a number : ");
	scanf("%d",&num);
	temp = num;
	while (temp!=0){
		rem = temp%10;
		f=1;
		for (i=rem;i>=1;i--){
			f = i*f;
		}
		fact = fact+f;
		temp=temp/10;
	}
	if (fact == num){
		printf("strong number ");
	} 
	else {
		printf("Not a strong number");
	}
	return 0;
	
}
	
