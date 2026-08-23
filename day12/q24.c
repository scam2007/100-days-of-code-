//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main (){
	printf("This progam calculates electricity bill on basis of units consumed \n");
	int x;
	printf("enter the number of units consumed ");
	scanf("%d",&x);
	if (x<=100){
		printf("the total bill is : %d",x*5);
	} else if (x>100 && x<=200){
		printf("the total bill is : %d",(x-100)*7+500);
	} else if (x>200 && x<300){
		printf("The total bill is : %d",(x-200)*10+1300);
	} else {
		printf("Your bill is : %d",2300+(x-300)*12);
	} return 0;
}









