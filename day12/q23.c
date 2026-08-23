//Q23: Write a program to calculate library fine based on late days as follows: 
/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹22

Input 3:
15
Output 3:
Fine ₹60

Input 4:
31
Output 4:
Membership Cancelled

*/
#include <stdio.h>
int main(){
	printf("This program claulates lib fine based on late days \n");
	int x;
	printf("Enter the number of late days : ");
	scanf("%d",&x);
	if (x <= 5){
		printf("the late fee is : %d",x*2);
	} 
	else if (x>5 && x<=10){
		printf("your late fee is : %d",(x-5)*4+10);
	}
	else if (x>10 && x<=20){
		printf("your late fee is : %d",(x-10)*6+30);
	}
	else {
		printf("Your subscription is cancled \n");
	}
	return 0;
}








